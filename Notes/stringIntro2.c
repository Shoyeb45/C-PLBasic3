#include<stdio.h>
#include<string.h>

int main()
{
    char name[20] ;
    gets(name);
    printf("%s\n", name);
    puts(name);
    char a;
    a = getchar();
    putchar(a);
}