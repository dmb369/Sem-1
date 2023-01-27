// Write a C program to implement BITWISE Operators.
// Take two integers and apply all Bitwise operators in order -
//  & , | , ^ , ~ , << , >>

#include <stdio.h>

int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   printf("%d\n",a&b);
   printf("%d\n",a|b);
   printf("%d\n",a^b);
   printf("%d\n",~a);
   printf("%d\n",a<<2);
   printf("%d",b>>2);
}