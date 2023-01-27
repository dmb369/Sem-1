// Write a C program to create an integer array of size n, read and store n values in an array and print the array elements in that order.

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int list[n];
    for(int i=0; i<n; i++){scanf("%d",&list[i]);}
    for(int i=0; i<n; i++){printf("%d ",list[i]);}
    return 0;
}