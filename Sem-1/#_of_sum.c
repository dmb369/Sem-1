// Write a program that will find and count the ways that a positive whole number can be written as the sum of two or more consecutive positive whole numbers.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int list[n];
    printf("THE CONSECUTIVE SUMS ARE:\n");
    int x=0;
    for ( int i=1; i<=n; i++)
    {
        int sum=i;
        for ( int j=i+1; j<=n; j++)
        {

            sum+=j;
            if (n==sum) 
            {
                printf("%d = %d",n,i);
                for (int k=i+1; k<=j; k++) { printf("+%d",k); }
                x++;
                printf("\n");
                break;
            }
        }
    }
    printf("NUMBER OF CONSECUTIVE SUMS = %d",x);
    return 0;
}