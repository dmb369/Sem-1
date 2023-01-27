// Write a C program to read an integer n, followed by n integers, store these integers in an array, and then print the array in reverse.

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int list[n];
    for(int i=0; i<n; i++){scanf("%d",&list[i]);}
    for(int i=n-1; i>=0; i--){printf("%d ",list[i]);}
    return 0;
}