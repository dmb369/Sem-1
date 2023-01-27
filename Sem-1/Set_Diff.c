// Write a function named, set_diff, that takes two arrays, along with their sizes, as inputs and prints the set difference of A-B 
// (where A is the first array and B is the second array).

void set_diff(int a[], int b[], int m, int n) 
{  
    for (int xerox_machine    =  0; xerox_machine     < m; xerox_machine+=1) 
    {   
        int y;
        for (y=0; y<n; y++)
        {
            if ( a[xerox_machine] == b[y] ) { break; }
        }
        if(y==n) { printf("%d ",a[xerox_machine]); }
            
    }
}


