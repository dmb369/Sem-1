// Write a program that accepts the time of the day as a six digit string in the form of HHMMSS where HH denotes the hours, MM denotes the minutes and SS denotes the seconds.
// INPUT: 113040
// OUTPUT: 41440
// since 113040 means 11:30 40 seconds AM i.e., (11*60*60 + 30*60 + 40) seconds

#include <stdio.h>
#include <math.h>

int main() 
{
    int n,a;
    scanf("%d", &n);
    a=n;
    int b, solve=0;
    for (int i=0; a!=0; i++) 
    {
        b=a%100;
        solve += b*(pow(60,i));
        a /= 100;
    }
    printf("%d",solve);
    return 0;
}
