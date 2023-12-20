#include<stdio.h>
#include<string.h>
//defining the structure

struct info
{
    int id;
    char name[20];
    int number;
}t1, t2;

//Defining the variable of structure: 1)in main 2)in definition of struct
int main()
{
//2)

struct info t1={12, "Shoyeb", 99};  //We can't define string directly with assignment operator 
struct info t2={19, "Sandeep",93};

printf("Id: %d  Name: %s  Number: %ld", t1.id, t1.name, t1.number);
printf("\nId: %d  Name: %s  Number: %ld", t2.id, t2.name, t2.number);

}
