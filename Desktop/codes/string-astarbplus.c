// for regular expression a, a*b+, aab;
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
    while(s[i]!='\0'){
        switch(state){
            case 0:
                c=s[i++];
                if(c=='a')
                    state=1;
                else if(c=='b')
                    state=3;
                else
                    state=4;
            break;
            case 1:
                c = s[i++];
                if(c == 'a')
                    state = 2;
                else if(c=='b')
                    state =3;
                else
                    state =4;
            case 2:
                c=s[i++];
                if(c=='a') state=2;
                else if(c=='b') state=3;
                else state=4;
            break;
            case 3: c=s[i++];
                if(c=='a') state=4;
                else if(c=='b') state=3;
                else state=4;
            break;
            case 4:
                printf("%s is not recognised.\n",s);
            exit(0);
        }
    }
    if(state==1)
        printf("%s is accepted under rule 'a'\n",s);
    else if((state==2)||(state==3))
        printf("%s is accepted under rule 'a*b+'\n",s);

}

