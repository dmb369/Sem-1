// There is a robot on an m x n size chessboard. The robot is initially located at the top-left corner (i.e., grid[0][0]). 
//The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). 
//The robot can only move either down or right at any point in time.
// Given the two integers m and n, write a function named, count_paths, 
//that returns the number of possible unique paths that the robot can take to reach the bottom-right corner.

int count_paths( int a, int b)
{
    if (a==1 || b==1) 
    {
        return 1;
    }
    return count_paths(a-1, b) + count_paths(a, b-1);
}