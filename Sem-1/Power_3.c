// Write a C program to find (a+b)^3.

#include<stdio.h> 

int main() 

{ 

    int a,b,cube; 

    scanf("%d%d",&a,&b); 

    cube=a*a*a+3*a*a*b+3*a*b*b+b*b*b; 

    printf("%d",cube); 

} 