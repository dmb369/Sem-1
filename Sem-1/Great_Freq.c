// Find the element with the greatest frequency in an array. If there is more than one element with the greatest frequency, print all those elements and their frequencies, in the order of appearance of the elements.

#include <stdio.h>  
   
int main()  
{  
    int n;
    scanf("%d",&n);
    int list[n]; 
    for( int i=0; i<n; i++ ) { scanf("%d",&list[i]); }
    int list_1[n];  
    int len = sizeof(list_1)/sizeof(list_1[0]);
    int makes_sure=-1;
      
    for( int i=0; i<n; i++)
    {  
        int count=1;  
        for(int j=i+1; j<n; j++)
        {  
            if( list[i] == list[j])
            {  
                count++;  
                list_1[j]=makes_sure;
            }  
            if ( list_1[i]!=makes_sure) { list_1[i]=count; }
        }  
    }  
    for(int i=0; i<len; i++)
    {  
        if (list_1[i]>1) { printf("%d %d\n", list[i], list_1[i]); }  
    }  
    return 0;
}