// Write a program that reads a list of words. 
// Then, the program outputs those words and their frequencies. 
// The input begins with an integer indicating the number of words that follow. 
// Assume that the list will always contain less than 20 words, and each word will always contain less than 10 characters.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char list[n][10];
    for (int i=0; i<n; i++) { scanf("%s",list[i]); }
    for (int i=0; i<n; i++)
    {
        int count=0;
        for ( int j=0; j<n; j++)
        {
            int a=strcmp( list[i], list[j] );
            if ( a == 0 )
            {
                count++;
            }
        }
        printf("%s %d\n", list[i], count);
    }
    return 0;
}