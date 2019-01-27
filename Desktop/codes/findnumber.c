#include<stdio.h>
#include<stdlib.h>
void main(){

FILE *fp;
char ch;
int nod=0;
fp=fopen("findfile.c","r");
while(1){

            if(isdigit(ch))
                nod++;


    }

fclose(fp);

printf("Total number of digits: %d\n",nod);

return 0;
}

