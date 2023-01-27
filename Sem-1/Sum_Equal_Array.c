// Given an array of integers A and an integer S, determines whether there exist two elements in the array whose sum is exactly equal to S or not. 
// Display 1 if a pair is found in an array with matching sum S else 0. 

#include <stdio.h>

int main()
{
    int x,n;
    scanf("%d\n",&x);
    scanf("%d\n",&n);
    int list[n];
    int flag=0;
    for (int i=0; i<n; i++) {scanf("%d", &list[i]);}
    for (int a=0; a<=n-1; a++)
    {
        for (int b=(a+1) ; b<n; b++)
        {
            if ( (list[a] + list[b]) == x ) 
            { 
                flag++;
                break;
            }
        }
    }
    if (flag == 1) { printf("1"); }
    else { printf("0"); }
    return 0;
}