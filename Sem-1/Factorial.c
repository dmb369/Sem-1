// Write a c program to find the factorial of a given integer using for loop.

#include<stdio.h>
int main(){
    int i,n,prod;
    scanf("%d",&n);
    prod=1;
    for (i=1; i<=n; i++){
        prod=prod*i;
    }
    printf("%d",prod);
}