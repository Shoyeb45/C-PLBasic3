#include<stdio.h>

struct myInfo
{
    int age;
    int height;
};


int main()
{
    struct myInfo p1;
    p1.age = 19;
    p1.height = 164;
    printf("Age\tHeight\n%d\t%d",p1.age, p1.height);
    return 0;
}