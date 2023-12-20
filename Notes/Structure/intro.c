#include<stdio.h>
#include<string.h>
//defining the structure

struct info
{
    int id;
    char name[20];
    int number;
};

//Defining the variable of structure: 1)in main 2)in definition of struct
int main()
{
//1)

struct info t1, t2, t3;

printf("Enter the id:");
scanf("%d", &t1.id);
t2.name[20] = "Shoyeb";
// printf("Enter the name:");
// scanf("%s",t2.name);
printf("Enter the number:");
scanf("%d", & t3.number);

printf("%d\n",t1.id);
printf("%s",t2.name);
printf("\n%d",t3.number);

}
