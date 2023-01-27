// Write a program that will create a letter V of any size N < 20 as shown below.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1, b=(2*n)-1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=(2*n)-1; j++)
        {
            if (j==i) {printf("*");}
            else if (i==a && j==b) {printf("*");}
            else if (j==i+1 && i!=n) {printf("*");}
            else {printf(" ");}
        }
        a++;
        b--;
        printf("\n");
    }
}