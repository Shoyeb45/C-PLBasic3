//Using pointers to scan values and give basic operation
#include<stdio.h>

int main()
{
    printf("Enter two numbers:");
    int a, b;
    int *n1 = &a, *n2 = &b;
    scanf("%d %d", n1, n2); // Since the n1 and n2 have addresses of a and b, so we need not to use '&' sign here
    printf("Add.:%d\n", *n1 + *n2);
    printf("Subtr.:%d\n", *n1 - *n2);
    printf("Mult.:%d\n", *n1 * *n2);
    printf("Divi.:%d\n", *n1 / *n2);
}