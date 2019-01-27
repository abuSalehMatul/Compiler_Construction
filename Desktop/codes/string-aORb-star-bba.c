// for regular expression (a|b)*bba
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s[20],c;
    int state=0,i=0;
    printf("Enter a string:\n");
    gets(s);
    int len = strlen(s);
    char st[3] = "bba";
    for(i=len-3; i<len;i++){
        if(s[i] != st[i])
            state = 1;
    }
    i=0;
    while(i < len-3){
        switch(state){
            case 0:
                c=s[i++];
                if(c=='a' || c=='b')
                    state=0;
                else
                    state = 1;
                break;
            case 1:
                printf("%s is not recognised.\n",s);
                exit(0);
        }
    }
    if(state==0)
        printf("%s is accepted under rule (a|b)*bba\n",s);
    return 0;
}

