// Write a program to print the following pattern. Input that is, the largest number in the pattern is provided by the user.

#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++){printf("%d ",j);}
        printf("\n");
    }
    for (int k=n-1; k>=1; --k)
    {
        for (int l=1; l<=k; l++){printf("%d ",l);}
        printf("\n");
    }
}