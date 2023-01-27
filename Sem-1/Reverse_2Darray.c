// Given a 2D array of integers, print it in row-major order but in reverse---from the last element of the last row to the first element of the first row.
// INPUT FORMAT: m n m*n elements of the array (where m is no. of rows, n is no. of cols)
// OUTPUT FORMAT: m*n elements of the array in reverse order (from a[m-1][n-1] element to a[0][0] element in one row)

#include <stdio.h>

int main() {
    int i,j;
    scanf("%d %d",&i, &j);
    int list[i][j];
    for(int a=0; a<i; a++)
    {
        for (int b=0; b<j; b++) {scanf("%d ",&list[a][b]);}
    }
    for(int a=i-1; a>=0; a--)
    {
        for (int b=j-1; b>=0; b--) {printf("%d ",list[a][b]);}
    }
    return 0;
}