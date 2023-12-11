#include<stdio.h>

void main()
{
    char str1[100] ,str2[100];
    printf("Enter the str1:");
    gets(str1);
    printf("Enter the str1:");
    gets(str2);

int i, j, k;

for(i=0 ; str1[i] != '\0' ; i++){
    if(str1[i] = '\0'){
        for(j=i,k=0 ; str2[k] != '\0' ; k++,j++ ){
            str1[j] = str2[k];
        }
    }
}

printf("%s" , str1);
    
}