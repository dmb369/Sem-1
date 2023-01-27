// Write a C program to read temperature and convert temperature from degree celsius to Fahrenheit.

#include <stdio.h>
int main(){
    int cel;
    float fah;
    scanf("%d", &cel);
    fah=(cel*(1.8))+32;
    printf("%.2f",fah);
}