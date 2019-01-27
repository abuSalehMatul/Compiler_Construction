#include<stdio.h>
#include<string.h>
void main()  {
    char input[100],*l,*r,*temp,tempprod[20],productions[25][50];
    int i=0,j=0,flag=0;
    printf("Enter the productions: ");
    scanf("%s",input);
    l = strtok(input,"->");
    r = strtok(NULL,"->");
    temp = strtok(r,"|"); //strtok() stores the pointer in static variable where did you last time left off
   // , so on its 2nd call , when we pass the null , strtok() gets the pointer from the static variable .

//If you provide the same string name , it again starts from beginning
    while(temp)  {
        if(temp[0] == l[0])  {
            flag = 1;
            sprintf(productions[i++],"%s'->%s%s'\0",l,temp+1,l); //sprintf stands for “String print”. Instead of printing on console, it store output on char buffer which are specified in sprintf
        }
        else
            sprintf(productions[i++],"%s->%s%s'\0",l,temp,l);
        temp = strtok(NULL,"|");
    }
    sprintf(productions[i++],"%s->\356\0",l);
    if(flag == 0)
        printf("The given productions don't have Left Recursion");
    else
        for(j=0;j<i;j++)  {
            printf("\n%s",productions[j]);
        }
}
