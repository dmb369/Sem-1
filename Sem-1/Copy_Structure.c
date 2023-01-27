// Write a C program to create a structure called myStructure with an integer, character and a string as members. 
//Create a structure variable, assign the details respectively and copy the structure into another structure and display the details.

#include <stdio.h>

struct myStructure 
{
    int xerox;
    char yours;
    char zed[20];
}s1;

int main()
{
    struct myStructure s2;
    scanf("%d,%c,%s", &s1.xerox, &s1.yours, &s1.zed);
    s2=s1;
    printf("%d %c %s", s2.xerox, s2.yours, s2.zed);
    return 0;
}