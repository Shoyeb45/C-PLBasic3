#include<stdio.h>

int main()
{
    float pi = 3.14 ;
    float *const ptr = &pi; //declaration of pointer
    
    float Pi = 3.1416;

    /* ptr = &Pi;
        we can't do this
    */
   //But we can do this:
   *ptr = 3.1416;
   printf("PI=%.4f", *ptr); 

   return 0;
}