// Write a C program to print all the rotations of a given string using functions and pointers.

void rotation (char *ptr)
{
    int l=1;
    for ( int i=0; ptr[i]!='\0'; i++)
    {
        for ( int j=l; ptr[j]!='\0'; j++) 
        { 
            printf("%c",ptr[j]); 
        }
        for ( int k=0; k<(i+1); k++) { printf("%c", ptr[k]); }
        l++;
        printf(" ");
    } 
}
