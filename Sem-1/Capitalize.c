// Write a C program to capitalize the first and last letter of each word in a line using functions and pointers.

#include<string.h>

void capitalize(char *arr,int n) 
{ 
    for (int i=0; arr[i]!='\0'; i++)
    {
        if (i==0 || i==n-1) 
        {
            arr[i]=toupper(arr[i]);
        }
        else if (arr[i]==' ')
        {
            arr[i-1]=toupper(arr[i-1]);
            arr[i+1]=toupper(arr[i+1]);
        }
    }
    
    for (int j=0; j<n; j++) {printf("%c",arr[j]); }   
}