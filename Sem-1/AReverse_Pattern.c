// Write a program to print the following pattern  of n rows, given n as input.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (char ch=65; ch<=65+n-1; ch++){printf("%c",ch);}
    for (char ch1=65+n-2; ch1>=65; ch1--){printf("%c",ch1);}
    printf("\n");
    for (int i=n-1; i>=1; i--)
    {
        for (char ch=65; ch<=65+i-1; ch++){printf("%c",ch);}
        for (int j=1; j<=2*(n-i)-1; j++){printf(" ");}
        for (char ch1=65+i-1; ch1>=65; ch1--){printf("%c",ch1);}
        printf("\n");
    }
}
