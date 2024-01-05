#include<stdio.h>

int main()
{
    int a[2][3] = {1, 3, 6, 8, 1, -9};
    printf("Following are the address of given 2d array which will give the idea of memory:\n");
    
    for(int i=0 ;i<2 ; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", &a[i][j]);
        }
        printf("\n");
    }

    return 1;
}