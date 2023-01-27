// Define a function, array_sum, which takes an array and its size as arguments, calculates the sum of its elements and prints their sum. 
// This function directly prints the sum, it does not return anything.

void array_sum(int a[], int size){
    int i,sum=0;
    for (i=0; i<size; i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
}