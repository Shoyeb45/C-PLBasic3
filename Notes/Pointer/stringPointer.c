#include<stdio.h>

int main()
{
    char *a[3] = {"Shoyeb", "Awadh", "Shubham"};
     printf("%s",*(a+1));
    return 1;
}