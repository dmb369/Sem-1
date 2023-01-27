// Any word that begins and ends with the same letter can be made into a word triangle. 
// Your job is to write a program that will print out word triangle for any word that begins and ends with the same letter. 
// Your program should ask the user to enter a word, check that it satisfies the given properties, and print out the word triangle if it can be done. 
// Print -1 if the word does not satisfy. Assume the word contains max. 20 characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    scanf("%s",str);
    int a = strlen(str);
    int flag=0;
    for(int i=0; i<a; i++)
    {
       if (str[0]==str[a-1]) 
       { 
           flag++;
           break;
       }
    }
    
    if (flag==0) {printf("-1"); }
    else
    {
        for (int b=0; b<=a-2; b++)
        {
            for (int c=1; c<=(2*a); c++) 
            {
                if ( c == a-b || c == a+b ) { printf("%c",str[b]); }
                else { printf(" "); }
            }
            printf("\n");
        }
        for ( int i=0; str[i]!=0; i++) { printf("%c ", str[i]); }
    }
    return 0;
}