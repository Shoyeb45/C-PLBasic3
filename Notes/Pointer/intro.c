#include<stdio.h>

int main()
{
    int a=4;
    char c='r';
//defining pointers
int *p = &a;
char *q = &c;

printf("%d %c", *p, *q);

}