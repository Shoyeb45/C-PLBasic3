//taking input from user
#include<stdio.h>

void main()
{
    //declare
    int a[3][4];

    //using nested for loop for input
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            printf("Enter element in row %d and column %d:", i+1, j+1);
            scanf("%d", & a[i][j]);
        }
    }

    //for printing
printf("\n\tTwo dimensional array\n\n");
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
        printf("%d ",  a[i][j]);
        }
        printf("\n");
    }
}