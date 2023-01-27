// Write a C program to calculate X^N (X to the power of N) using the pow function.

#include <stdio.h>
#include <math.h>
int main(){
    int num, power, res;
    scanf("%d %d", &num, &power);
    res=pow(num,power);
    printf("%d",res);
}