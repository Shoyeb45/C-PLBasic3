#include<stdio.h>

int main()
{
    float pi = 3.14 ;
    const float *ptr = &pi; //declaration of pointer
    /* *ptr = 3.14;
        we can't do this
    */
   //But we can do this:
   float Pi = 3.1416;
   ptr = &Pi;
   printf("PI=%.4f", *ptr); // It will print 3.1416

   return 0;
}