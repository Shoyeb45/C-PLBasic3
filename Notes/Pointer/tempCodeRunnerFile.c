#include<stdio.h>

int main(){
        int a=89;  
        double pi = 3.14;  //These identifiers must have some address in memory
        //So pointer is used to point to that address
        int *p;
        double *q;

        //Now
        p = &a ; //It points to the address of a
        q = &pi; // It points to the address of pi

        //accessing pointers by *identifier , like '*p' , then we are accessing the address which it's pointing i.e. value of a
        //If we access it by there identifier only then we are having the address of the identifier which we have assigned

printf("a=%d\n",*p);
printf("pi=%lf",*q);

//Printing address. format specifier:%p

printf("\naddress of a=%p",p);
printf("Address of pi=%p",pi);




}