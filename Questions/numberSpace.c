#include<stdio.h>
#include<string.h>

void main()
{
 char a[50];
 printf("Enter text:");
 gets(a);
 printf("You have enterd :");
 puts(a);
int len = strlen(a);
int count = 0;
 for(int i=0; i<len ; i++){
     if(a[i] == 32){
        count++;
     }
 }

 printf("Number of spaces:%d", count);


}