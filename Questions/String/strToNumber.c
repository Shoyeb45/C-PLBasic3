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
int sum=0;

 for(int i=0; i<len ; i++){
     if(a[i]>=48 && a[i]<=57){
        sum = sum*10 + (a[i]-48);
        
     }
 }

 if(sum>20)
 printf("The number is greater than 20.");
 else
 printf("The number is not greater than 20.");

}