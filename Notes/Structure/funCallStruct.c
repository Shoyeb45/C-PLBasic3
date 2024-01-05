#include<stdio.h>

struct books
{
    char title[20];
    char Author[20];
}book;

void printbook(struct books book);

int main(){

   struct books book = {"The 11 minutes", "Paulo Coehlo"};
   printbook(book);
    return 1;

}

void printbook(struct books book){
    printf("Book title:%s", book.title);
    printf("\nAuthor:%s", book.Author);
}