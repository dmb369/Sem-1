// Write a C program that creates a structure called car with members brand, model and year. 
// Create an array of structure variables of size 3, initialize the members and print.

#include <stdio.h>

struct car 
{
    char brand[20];
    char model[20];
    int year;
};

int main()
{
    struct car s1;
    struct car s2;
    struct car s3;
    scanf("%s\n %s\n %d\n", &s1.brand, &s1.model, &s1.year);
    scanf("%s\n %s\n %d\n", &s2.brand, &s2.model, &s2.year);
    scanf("%s\n %s\n %d\n", &s3.brand, &s3.model, &s3.year);
    printf("%s %s %d\n", s1.brand, s1.model, s1.year);
    printf("%s %s %d\n", s2.brand, s2.model, s2.year);
    printf("%s %s %d\n", s3.brand, s3.model, s3.year);
    return 0;
}