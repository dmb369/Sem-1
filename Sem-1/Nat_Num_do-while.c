// Write a c program to find the sum of N natural numbers using a do-while loop.

#include<stdio.h>
int main(){
    int i,n,sum;
    scanf("%d",&i);
    sum=0;
    n=1;
    do{
        sum+=n;
        n++;
    }while(n<=i);
    printf("%d",sum);
}