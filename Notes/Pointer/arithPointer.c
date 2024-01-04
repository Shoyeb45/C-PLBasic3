#include<stdio.h>

int main()
{
    int a = 19;
    int *p = &a , *q = p + 1;
    printf("%d\n", (int)p);
    printf("%d", (int)*q);

    

}