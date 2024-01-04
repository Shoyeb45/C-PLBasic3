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
int LowerCase=0 , UpperCase=0;

 for(int i=0; i<len ; i++){
     if(a[i]>=97 && a[i]<=122){
        LowerCase++;
 }    
 if(a[i]>=65 && a[i]<=90){
        UpperCase++;
    }
 }

 

 printf("Number of uppercase character %d\nNumber of lowercase character %d", UpperCase ,LowerCase);

}