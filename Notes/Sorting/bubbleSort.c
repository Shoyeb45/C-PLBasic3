#include<stdio.h>

int main(){
    int a[5] = {20, 19, -10, 21, 31};

       for(int i=0; i<5; i++){
        for(int j=0; j<4-i ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
       }
       for(int i=0; i<5 ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}