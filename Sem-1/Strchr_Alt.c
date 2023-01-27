// Take an input string up to newline and find the index/position of the first occurrence of a given character in that string (recall that the index of an array starts from 0). If the character is not present in the string, print -1.

#include <stdio.h>

int main()
{
    char str[50];
    char a;
    scanf("%[^\n]%*c", str);
    scanf("%c",&a);
    int i=0;
    for (i=0; i<50; i++)
    {
        if (str[i] == a) { break; }
    }
    if (i<50) { printf("%d ", i); }
    else { printf("-1"); }
    return 0;
}