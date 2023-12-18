#include<stdio.h>

void main()
{
    int a=10, b=20, *res;
    int *p, *q;
    p = &a;
    q = &b;

    *res = *p + *q;

    printf("%d",*res);
}