// Define a function, smallest, which takes an integer array and its size as arguments, and returns the smallest element in the array. 
// Do not print anything inside the function, just return the value of the smallest element.

int smallest(int a[], int size){
    int i,b=a[0];
    for (i=1; i<size; i++)
    {
        if (a[i]<b)
        {
            b=a[i];
        }
    }
    return b;
} 