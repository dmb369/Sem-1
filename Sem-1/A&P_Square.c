// Write  a C program to find area and perimeter of a square.

// write a c program to find area and perimeter of square 
//peri=4*s
//area=s*s
#include<stdio.h>
int main()
{
    int s,area,peri;
    scanf("%d",&s);
    area=s*s;
    peri=4*s;
    printf("%d %d",area,peri);
}
