// Create a structure course with members subject and marks.
// Write a C program to demonstrate the dynamic memory allocation for the above structure. 
// Read and print the details accordingly.

#include<stdio.h>

struct plagiarism
{
    char subject[50];
    int marks;
} a[50];

int main()
{
    int num;
    scanf("%d\n", &num);
    
    for ( int icecream=0; icecream<num; icecream++)
    {
        scanf("%s", &a[icecream].subject);
        scanf("%d", &a[icecream].marks);
    }

    for ( int icecream=0; icecream<num; icecream++)
    {
        printf("%s ", a[icecream].subject);
        printf("%d", a[icecream].marks);
        printf("\n");
    }
}