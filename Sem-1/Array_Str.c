// Write a C program to read a string from the user and print each character of the string in a newline, and the whole string in the last line. Assume the max. string size is 50.

#include <stdio.h>

int main() {
    char str[50];
    scanf("%s",&str);
    for(int i=0; str[i]!='\0'; i++){printf("%c\n",str[i]);}
    printf("%s",str);
}