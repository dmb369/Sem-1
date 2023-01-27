// Write a c program on pointers to find entered string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int a=strlen(s);
    char s1[a];
    int flag=a-1;
    for ( int i=0; i<a; i++ ) 
    {
       int *py;
       py=&s[flag];
       s1[i]=*py;
       flag--;
    }
    if (strcmp(s,s1)==0) 
    { printf("Palindrome string"); }
    else
    { printf("Not a palindrome"); }
}