#include<stdio.h>

int main()
{
    int a[5] = {11, 24, 34, 10, 5};

    for(int i=1 ; i<5 ; i++){
        int current = a[i];
        int j=i-1;
        while (j>=0 && current < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
        
    }

    for(int i=0 ; i<5 ; i++){
        printf("%d ", a[i]);
    }
    return 1;
}