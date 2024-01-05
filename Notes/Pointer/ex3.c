#include<stdio.h>

void main()
{
    int a[]={1, 2, 3 ,4};
    char b[]={'q','u', 'i', 'z'};
    int *p;
    char *q;
    p = a;
    q = b;


    printf("%d\n",*(p+1));
    printf("%c\n",*(q+3));
    printf("%c", *p);
}