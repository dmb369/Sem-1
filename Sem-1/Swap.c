// Write a C function, swap, with call-by-reference to swap two integers using their pointers as arguments. 
// It should not scan/print/return anything. 
// It should just swap the values inside the function, that's it.

void swap(int *p1, int *p2)
{    
    int temp, amp;
    temp=*p1;
    amp=*p2;
    *p2=temp;
    *p1=amp;
}