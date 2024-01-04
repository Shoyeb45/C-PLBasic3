#include<stdio.h>
#include<string.h>

//hidh // dfd// 

void main()
{
    char valid[30];
    printf("Enter comment:");
    gets(valid);
    printf("You have entered:");
    puts(valid);
int flag=0;
    
        if(valid[0]=='/' && valid[1]=='/')
        flag+=1;
        else
        flag=0;
    

if(flag)
printf("Valid comment.");
else
printf("Invalid comment.");
}