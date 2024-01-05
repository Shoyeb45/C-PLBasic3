#include<stdio.h>

int main(){
    int a[]={5, 2, 3};
    int *p;
    p = &a[2];
    printf("%d", *p);
    p = &a[1];
    printf("\n%d",*(p-1));
}