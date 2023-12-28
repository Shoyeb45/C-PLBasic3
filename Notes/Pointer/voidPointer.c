#include<stdio.h>

int main()
{
    void *ptr;
    int a= 9;
    ptr = &a;
    printf("%d", *(int*)ptr);  

    char b = 'h';
    ptr = &b;
    printf("%c", *(char*)ptr);

    double e = 2.74;
    ptr = &e;
    printf("%.2lf", *(double*)ptr);
    return 0;
}