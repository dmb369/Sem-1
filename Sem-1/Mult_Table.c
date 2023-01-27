// Write a c program to read N and R values and display the multiplication table of  N until the R-value using for loop.

#include<stdio.h>
int main(){
    int i,num,range,prod;
    scanf("%d %d",&num, &range);
    prod=1;
    for (i=1; i<=range; i++){
        prod=num*i;
        printf("%d*%d=%d\n",num,i,prod);
    }
}