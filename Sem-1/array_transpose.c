// Write a function, array_transpose, that takes a matrix as an array in row-major order. 
// Assume the array size is n. The function takes another integer m denoting the number of rows in this matrix, so the number of columns will be n/m (assume m is a factor of n). 
// Find the transpose of this matrix and print it in row-major order.

void array_transpose(int n, int a[n], int m)
{
    int c[m][n/m];
    int o=0;
    for ( int g=0; g<m; g++)
    {
        for ( int h=0; h<(n/m); h++)
        {
            c[g][h]=a[o];
            o++;
        }
    }
 
    int b[n/m][m];
    for ( int i=0; i<m; i++ )
    {
        for ( int j=0; j<(n/m); j++ ) { b[j][i]=c[i][j]; }
    }
    
    for ( int i=0; i<(n/m); i++)
    {
        for ( int j=0; j<m; j++ ) { printf("%d ", b[i][j]); }
    }
}