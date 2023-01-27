// Write a c program to read  a number and display it in reverse.

#include<stdio.h>
int main()
{
    int n,r,k=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;    //This takes the last value
        k=k*10+r;  //This helps in reversing the number
        n/=10;
    }
    printf("%d",k);
    return 0;
}