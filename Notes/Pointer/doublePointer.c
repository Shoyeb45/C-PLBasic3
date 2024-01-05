#include<stdio.h>

int main()
{
    int a=9;
    int *x = &a;
    int **y = &x; // Stored the address of x

    printf("%d",*x);
    printf("\nAddress of x:%p",y);
    printf("\n%d",**y); //Points to x which points to a
    printf("\n%p", y);
    return 0;
}