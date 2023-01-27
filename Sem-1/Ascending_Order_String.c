// Write a C program to read a string and sort the letters of the string in ascending order, using functions and pointers.

void sort(char *str,int len)
{
   int c, b[50];
   for (int i=0; i<len; i++) { b[i]=str[i]; }
    for (int k=0; k<len; k++)
    {
        for (int l=k+1; l<len; l++)
        {
            if ( b[k]>b[l]) 
            { 
                c=b[k];
                b[k]=b[l];
                b[l]=c;
            }
        }
    }
    for (int m=0; m<len; m++) { printf("%c",b[m]); }
 
}