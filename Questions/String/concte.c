//concating two string
#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100] ,str2[100];
    printf("Enter the str1:");
    gets(str1);
    printf("Enter the str1:");
    gets(str2);

int i, j;
i = strlen(str1);
while( str2[j] != '\0'){
    str1[i] = str2[j];
    i++;
    j++;
}

str1[i] = '\0';

puts(str1);
    
}