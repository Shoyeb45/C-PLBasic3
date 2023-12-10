#include<stdio.h>

void Numprint(int a){
    if(a == 0)
    return;
    Numprint(a-1);
    printf("%d ",a);

}
void main()
{
    int n;
    printf("Enter the value:");
    scanf("%d",&n);

    Numprint(n);


}