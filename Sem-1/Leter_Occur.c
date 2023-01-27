// Write a C program to scan a string from the input and print how many times the letter 'e' appeared in it. Assume the maximum string size is 50.

#include <stdio.h>

int main() {
    char str[50];
    int count=0;
    scanf("%s",&str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if (str[i]=='e'){count++;}
    }
    printf("The letter 'e' is present %d number of times",count);
}