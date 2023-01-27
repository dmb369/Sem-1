// Write a C program to create a structure called myStructure with one character variable and one integer variable. 
//Create two structure variables in two different ways, assign the values to the members of the structure and print them.

#include <stdio.h>

struct myStructure
{
    int xerox;
    char character;
}p1;

int main()
{
    struct myStructure p2;
    scanf("%d,%c,%d,%c",&p1.xerox, &p1.character, &p2.xerox, &p2.character);
    printf("%d %c %d %c", p1.xerox, p1.character, p2.xerox, p2.character);
    return 0;
}
