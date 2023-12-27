#include<stdio.h>

void scan2D(int *a[][], int m, int n){
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            printf("Enter element in row %d and column %d:",i+1, j+1);
            scanf("%d",& *a[i][j]);
        }
    }   
}       

int main()
{
    int m, n, p, q;
    printf("Enter number of rows of first matrix:");
    scanf("%d",&m);
    printf("Enter number of columns of first matrix:");
    scanf("%d",&n);

    printf("Enter number of rows of first matrix:");
    scanf("%d",&p);
    printf("Enter number of columns of first matrix:");
    scanf("%d",&q);

    return 1;
}

