#include<stdio.h>
#include<string.h>

struct info{
    int id;
    char name[20];
}m1;

void printStruct(struct info *m1); //Function prototype

int main()
{   

     printf("Enter the id:");
     scanf("%d", m1.id);
     strcpy(m1.name, "Shoyeb");
   
    
    printStruct(&m1);

    return 1;
}



void printStruct(struct info *m1){
     printf("ID:%d\n",m1->id);
     printf("Name is:");
     puts(m1->name);

}