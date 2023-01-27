// Write a C program to read a character and find if it’s a vowel or a consonant (if-else).

#include <stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
}