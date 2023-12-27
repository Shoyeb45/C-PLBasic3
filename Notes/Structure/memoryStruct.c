#include<stdio.h>

struct hii
{
    int id;
    char name[20];
};


int main()
{
    struct hii t;
    long size = sizeof(t);
    printf("%ld", size); // Size will be 24 as 4 + 20 = 24

}