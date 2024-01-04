#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    printf("Enter text:");
    gets(c);

    // for(int i=0; i<strlen(c) ; i++){
    //     printf("%c",c[i]);
    // }

    // for(int i=0; i<strlen(c) ; i++){
    //     printf("%c",c[i]);
    // }

    for(int i=strlen(c), j=0 ; j<strlen(c)&&i< 2*strlen(c) ; i++, j++){
        c[i] = c[j];
    }

    // c[2*strlen(c)] = '\0';

    puts(c);
}