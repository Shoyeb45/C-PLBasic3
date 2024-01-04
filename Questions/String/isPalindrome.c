#include<stdio.h>
#include<string.h>

void main()
{
        char word[30];
    printf("Enter word:");
    gets(word);
    printf("You have entered:");
    puts(word);
int flag=0;
int len = strlen(word);
printf("\nLen:%d\n", len);
char reverse[len];
int i, j;
for(i=len-1,j=0 ; i>=0 ; i--,j++ ){
    printf("%d %d\n",i, j);
    reverse[j]=word[i];
}

reverse[j] = '\0';

printf("\nReverse word is:");
puts(reverse);

if(strcmp(reverse, word) == 0)
printf("You have entered palindrome word.");
else
printf("The entered word is not a palindrome.");
}