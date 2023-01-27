// Write a C program to read a number and find if the entered number is a positive value, negative value, or zero. 

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if (num>0) {
        printf("Positive number");
    }
    else if (num<0) {
        printf("Negative number");
    }
    else {
        printf("Zero");
     }
}