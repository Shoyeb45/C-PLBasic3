#include<stdio.h>

void main()
{
    int a=10, b=20, *res;
    int *p, *q;
    p = &a;
    q = &b;

    *res = *p + *q;

    printf("%d",*res);
    printf("\n%p", res); //res is not pointing to any pointer, So it is wild pointer
}