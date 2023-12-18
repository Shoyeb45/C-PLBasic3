#include<stdio.h>
#include<string.h>

void main()
{
    char b[]={'q','u', 'i', 'z'};
    int *p;
    int len = strlen(b);

p = &len;
// int add = (int) &len;
printf("%p\n", p);
// printf("p:%d",add);
    //  printf("%c\n",b[p-2]);
}