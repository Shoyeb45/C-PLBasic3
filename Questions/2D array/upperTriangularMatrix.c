#include<stdio.h>

int main()
{
    int a[3][3];
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
            printf("Enter element in row %d and column %d:",i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }
int isUpper=0;
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
            if(i>j && a[i][j]==0){
                isUpper = 1;
            }
        }
    }

    if(isUpper)
    printf("Matrix is upper traingle matrix.");
    else
    printf("Matrix is not a upper traingular matrix");

printf("Matirx is:\n");
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}