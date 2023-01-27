// Given an array A, push all the zeros of the array to the front. The order of all other elements should remain same. Sort the array in-place and then print it.

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int list[n], a[n];
    int count=0;
    for(int i=0; i<n; i++){scanf("%d",&list[i]);}
    
    for(int i=0; i<n; i++)
    {
        if (list[i] == 0) {a[count++] = 0;}
    }

    for (int i=0; i<n; i++) 
    {
        if (list[i] != 0) {a[count++] = list[i];}
    }
    
    for (int i=0; i<n; i++) {printf("%d ", a[i]);}
    return 0;
}