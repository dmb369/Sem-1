// Write a C program to find the area and perimeter of a rectangle.

#include<stdio.h> 

int main() 

{ 

    int a,b,area,peri; 

    scanf("%d%d",&a,&b); 

    area=a*b; 

    peri=2*(a+b); 

    printf("%d %d",area,peri); 

} 