// Write a program to print the following pattern of n rows, given n as input .

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=(n-i); k++){printf(" ");}
        for(int ch=65; ch<=(65+i-1); ch++){printf("%c",ch);}
        for(int l=1; l<=i; l++){printf("%d",l);}
        printf("\n");
    }
}