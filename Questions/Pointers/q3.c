#include<stdio.h>

int main()
{
    int *p; //Int pointer
    *p = 9;
    float *a; //Float pointer
    *a = 0.64535;
    void *q; //Void pointer
    q = p; //Assigning int to void
    printf("%d", *(int*)q);  //dereferencing void pointer

    q = a; //Assigning float to void
    printf("\n%f", *(float*)q);  //dereferencing void pointer
    return 0;
}