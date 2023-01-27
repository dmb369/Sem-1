// Write a C function that takes an array and the index of an element to be deleted from the array. 
// If index position is >= n display  "Deletion is not possible".
// If index is in between 0 to n-1 then display the array elements after deleting the element at the given index.

void delete(int arr[],int n,int index)
{
    if (index<n)
    {
        for ( int i=0; i<index; i++) { printf("%d ",arr[i]); }
        for ( int j=(index+1); j<n; j++) { printf("%d ",arr[j]); }
    }
    
    else { printf("Deletion is not possible"); }
}