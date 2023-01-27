// Write a C program to read an integer and find the factors of an integer.

#include<stdio.h>
int main(){
    int i,num,divs;
    scanf("%d",&num);
    for (i=1; i<=num; i++){
        if (num%i==0){
            printf("%d ",i);
        }
        else{
            printf("");
        }
    }
}