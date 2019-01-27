#include<stdio.h>
#include<stdlib.h>
void main(){

FILE *fp;
char ch;
int nol=0,nos=0,noc=0,nod=0,noalp=0;
fp=fopen("main.txt","r");
while(1){
    ch=fgetc(fp);
    if(ch==EOF)
        break;
    else{
        noc++;
        if(ch==' ')
            nos++;
        else if(ch== '\n')
            nol++;
            else if(isdigit(ch))
                nod++;
        else
            noalp++;
    }
}
fclose(fp);
printf("Total Np. of character: %d\n",noc);
printf("Total Np. of space: %d\n",nos);
printf("Total Np. of line: %d\n",nol);
printf("Total number of digits: %d\n",nod);
printf("Total Np. of alphabet: %d\n",noalp);


return 0;
}
