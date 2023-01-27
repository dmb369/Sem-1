// Write c program on pointers to find greatest of two numbers.

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int *x=&a, *y=&b;
    if (*x>*y) { printf("%d",a); }
    else { printf("%d",b); }
    return 0;
}