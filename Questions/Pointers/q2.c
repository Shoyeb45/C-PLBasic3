#include<stdio.h>

int main()
{
    int *p; //Int pointer
    *p = 9;
    float *a; //Float pointer
    
    void *q; //Void pointer
    q = p; //Assigning int to void
    printf("%d", *(int*)q);  //dereferencing void pointer

    
    return 0;
}