#include<stdio.h>

//defining the structure

struct info
{
    int id;
    char name[10];
    int number;
}s[2];


int main()
{

printf("Enter the info:");

for(int i=0 ; i<2 ; i++){
    scanf("%d",& s[i].id);
    scanf("%s", s[i].name);
    scanf("%d", & s[i].number);
}
printf("Id\tName\tNumber\n");
for(int i=0 ; i<2 ; i++){
    printf("%d\t", s[i].id);
    printf("%s\t", s[i].name);
    printf("%d\t\n", s[i].number);
}

}
