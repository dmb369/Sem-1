// Write C program to find sum of array elements using dynamic memory allocation function  malloc.

#include<stdio.h>
// #include <malloc.h>

int main()
{
    int num;
    scanf("%d",&num);
    int *py;
    int sum=0;
    py=(int*)malloc(num*sizeof(int));
    for ( int i=0; i<num; i++)
    { 
        scanf("%d", py+i);
        sum+=*(py+i);
    }
    printf("%d",sum);
    return 0;
}