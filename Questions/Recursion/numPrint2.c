//Printing from n to 1

#include<stdio.h>
void Numprint(int n){
    if(n == 0)
    return;
    printf("%d ",n);
    Numprint(n-1);
    
}
void main()
{
        int n;
    printf("Enter the value:");
    scanf("%d",&n);

    Numprint(n);
}