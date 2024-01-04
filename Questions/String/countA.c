#include<stdio.h>
#include<string.h>



void main()
{
    char str[30];
    printf("Enter text:");
    gets(str);
    printf("You have entered:");
    puts(str);
int flag=0;
int len = strlen(str);    
for(int i=0 ; i<len ; i++){
    if((str[i] == 'A') || (str[i] == 'a')){
        flag=flag+1;
    }
}    

printf("Number of characters are: %d",flag );



}