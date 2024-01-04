#include<stdio.h>
#include<string.h>

const int MAX = 3;

void main()
{
    int var[]={10, 100, 200};
    int *ptr[MAX];

    for(int i=0 ; i<MAX ; i++){
        // ptr[i] = & var[i];
*ptr[i] = var[i];        
        // printf("Value of var [%d]=%d\n",i, *ptr[i]);
     printf("Value of var [%d]=%p\n",i, *ptr[i]);
    }



}