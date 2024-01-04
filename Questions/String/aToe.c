#include<stdio.h>
#include<string.h>

void main()
{
 char a[50];
 printf("Enter text:");
 gets(a);
 printf("You have enterd :");
 puts(a);
int count=0;
for(int i=0 ; i<strlen(a) ; i++){
    if(a[i] >= 'a' && a[i] <= 'e'){
        count++;
    }
}
printf("Total number of character between a and e: %d",count);
}