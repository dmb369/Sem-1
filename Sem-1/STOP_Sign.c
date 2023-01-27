// Write a program that will generate and print a STOP sign of size N, where N>=3.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n-1; i++)
    {
        if (i==1)
        {
            for(int j=1; j<=2*n-2; j++) {printf(" ");}
            for(int k=1; k<=n; k++) {printf("* ");}
        }
        else 
        {
            for (int l=1; l<=(3*n)-2; l++)
            {
                if (i+l==n+1) {printf("* ");}
                else if ((l>=2*n) && (i+l==2*(n+i)-2)) {printf("* ");}
                else {printf("  ");}
            }
        }
        printf("\n");
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=(3*n)-2; j++)
        {
            if (j==1) {printf("* ");}
            else if (j==(3*n)-2) {printf("* ");}
            else {printf("  ");}
        }
        printf("\n");
    }
    for(int i=1; i<=n-1; i++)
    {
        if (i<n-1)
        {
            for (int j=1; j<=(3*n)-2; j++)
            {
                if (j==i+1) {printf("* ");}
                else if (i+j==(3*n)-2) {printf("* ");}
                else {printf("  ");}
            }
        }
        else 
        {
            for(int k=1; k<=n-1; k++) {printf("  ");}
            for(int l=1; l<=n; l++) {printf("* ");}
        }
        printf("\n");
    }
}