#include<stdio.h>
#include<string.h>

struct books
{
    int ISBN;
    char bookName[20];
    char Author[20];

}t1;

void printStruct(struct books t1); //Function prototype

int main()
{

struct books t1 = {1432343, "The alchemist", "Frank Herbert"};
printStruct(t1);
    return 1;
}

void printStruct(struct books t1){
     printf("Book ISBN Number:%d\n",t1.ISBN);
     printf("Book name is:");
     puts(t1.bookName);
     printf("Author:");
     puts(t1.Author);
}