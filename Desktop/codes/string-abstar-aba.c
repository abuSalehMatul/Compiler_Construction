// for regular expression (ab)*aba
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s[20],c;
    int state=0,i=0,j=0;
    printf("Enter a string:\n");
    gets(s);
    int len = strlen(s);
    char st[3] = "aba";
    for(i=len-3; i<len;i++){
        if(s[i] != st[j++])
            state = 2;
    }
    i=0;
    while(i < len-3){
        switch(state){
        case 0:
            c = s[i++];
            if(c=='a')
                state=1;
            else
                state = 2;
            break;
        case 1:
            c = s[i++];
            if(c == 'b')
                state = 0;
            else
                state = 2;
            break;
        case 2:
             printf("%s is not recognised.\n",s);
            exit(0);
        }
    }
    if(state==0)
        printf("%s is accepted under rule (a|b)*bba\n",s);
    else
        printf("%s is not recognised.\n",s);
    return 0;
}


