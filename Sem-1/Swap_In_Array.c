// Write a C program to read an integer n, followed by n integers, store these integers in an array, and then print the array after swapping the 1st and the nth element of the array.

#include <stdio.h>

int main() {
    int n,m;
    scanf("%d",&n);
    int list[n];
    for(int i=0; i<n; i++){scanf("%d",&list[i]);}
    m=list[0];
    list[0]=list[n-1];
    list[n-1]=m;
    for(int i=0; i<n; i++){printf("%d ",list[i]);}
    return 0;
}