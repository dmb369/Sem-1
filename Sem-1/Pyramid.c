// Write a program in C to display a pattern like a pyramid with numbers.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=(n-i); k++){printf(" ");}
        for(int l=1; l<=i; l++){printf("%d ",i);}
        printf("\n");
    }
}