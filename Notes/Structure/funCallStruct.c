#include<stdio.h>

struct books
{
    char title[20];
    char Author[20];
};

void printbook(struct books book);

int main(){

    return 1;

}

void printbook(struct books book){
    printf("%s", book.title);
}