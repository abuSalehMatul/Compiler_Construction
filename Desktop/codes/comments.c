#include <stdio.h>
int main() {
    FILE *fp;
    int c, i = 0, j, k, sl = 0;
    char ch, str[2000];
    fp = fopen("data.txt" ,"r");
    do {
         c = getc(fp);
         str[i++] = c;
    }
    while(c != EOF);
    fclose(fp);
    str[i] = '\0';
    for(j = 0; j <= i; j++){
        if(str[j] == '/' && str[j + 1] == '/'){
            printf("Comment number: %d\n", ++sl);
            for(k = j + 2; str[k] != '\n'; k++){
                printf("%c", str[k]);
            }
            printf("\n\n");
            j = k - 1;
        }
        if(str[j] == '/' && str[j + 1] == '*'){
            printf("Comment number: %d\n", ++sl);
            for(k = j + 2; ; k++){
                if(str[k] == '*' && str[k + 1] == '/') break;
                printf("%c", str[k]);
            }
            printf("\n\n");
        }
    }
    return 0;
}

