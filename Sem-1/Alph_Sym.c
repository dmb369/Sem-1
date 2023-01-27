// Write a C program to read an input character, print whether it is a Number or an Alphabet / a Symbol. 

#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if (ch>='a' && ch<='z'){
        printf("Alphabet");
    }
    else if (ch>='0' && ch<='9'){
        printf("Digit");
    }
    else {
        printf("Symbol");
    }
}