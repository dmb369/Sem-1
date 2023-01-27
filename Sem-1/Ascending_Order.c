// Write a c program to read elements of an array and display in ascending order using pointers and functions.

void sort(int *a,int len)
{
    int c;
    for (int k=0; k<len; k++)
    {
        for (int l=k+1; l<len; l++)
        {
            if ( a[k]>a[l]) 
            { 
                c=a[k];
                a[k]=a[l];
                a[l]=c;
            }
        }
    }
    
    for (int m=0; m<len; m++) { printf("%d ",a[m]); }
}