//Printing 2d array by using pointer

#include<stdio.h>

int main()
{
    int arr[3][4] = {{1,2,3,4} , {5, 6, 7, 8}, {9, 10, 11, 12}};

    for(int i=0 ;i<3 ; i++){
        for(int j=0 ; j<4 ;j++){
            printf("%d\t", *((*arr+i)+j)); // *arr + i for each element in 1d array and then +j for the different row for 2d array
        }
        printf("\n");
    }
    return 1;
}