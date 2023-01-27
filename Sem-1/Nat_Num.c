// Write a program in C to display N  natural numbers using a while loop.

#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d ",i);
        i+=1;
    }
}