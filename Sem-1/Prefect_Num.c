// Write a C program to find the perfect numbers within a given range (including the boundary numbers). 
// A perfect number is a positive integer that is equal to the sum of its proper divisors (i.e., all the divisors excluding itself). 
// For example 6 is a perfect number since the proper divisors of 6 are 1, 2 and 3.

#include<stdio.h>

int perfect(int);
int main()

{
    int a,b;
    scanf("%d %d", &a, &b);
    for (int i=a; i<=b; i++) { perfect(i); }
    return 0;
}   

perfect(int x)
{
    int sum=0;
    for (int j=1; j<x; j++)
    {
        if ((x%j)==0) { sum+=j; }
    }
    if (sum==x) { printf("%d ",x); }
}

