#include<stdio.h>

int Sum(int a,int sum){
//    if(a==1)
//    return a;
//    return a + sum(a-1);


if(a==1){
sum+=a;
return sum;
}

sum=sum+a;
Sum(a-1,sum);
}
void main()
{
    int n;
    printf("Enter the value:");
    scanf("%d",&n);

    int add=Sum(n,0);
    printf("Sum is %d.",add);


}