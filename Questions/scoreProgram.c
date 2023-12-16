#include<stdio.h>
#include<string.h>

void main()
{
    int space;
    char str[100];
    printf("Enter the score of player in this format: playerName scored run(in 3 digit only): ");
    gets(str);
int len = strlen(str);

for(int i=0 ; i<len ; i++){
    if(str[i] == 32){
    space=i;
    break;
    }
}
char name[space];

for(int i=0 ; i<space ; i++){
    name[i] = str[i];
}
int score=0;
for(int i=len-3 ; i<len ; i++){
     score = score * 10 + (str[i]-48);
}

if(score >= 100)
printf("%s scored centuary.", name);
else
printf("%s  didn't scored centuary.", name);



}