//Program to print valid if entered string is  like "aabaa" or "hhhxhhh" or "hxh" else invalid text.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter symmetric text:");
    gets(str);

    int len = strlen(str);

int isValid=0;
    if(len % 2 == 0){
    printf("Invalid symmetric text");
    }
    else{
        for(int i=0 ; i<(len/2) ; i++){
            for(int j=len-1 ; j>len/2 ; j--){
                if(str[i] == str[j])
                isValid=1;
                else
                isValid=0;
                
            }
        }
// printf("%d",isValid);
        if(isValid == 1)
        printf("Valid symmetric Text.");
        if(isValid == 0)
        printf("Invalid symmetric text");

    }

    
}