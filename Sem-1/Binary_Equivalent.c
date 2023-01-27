// A decimal number between 0 and 32 exclusive can be expressed in binary system as x4x3x2x1x0, where xi’s are either zero or one. Write a C program that takes as input a decimal number in the above range and prints out the equivalent binary representation.

#include <stdio.h>
int num_to_binary(int num);
int main()
{
   int num, a;
   scanf("%d", &num);
   if (num<0 || num>32) { printf("Entered number is out of range"); }
   else 
   {
       while(num>0 && num<32)
       {
           a = num_to_binary(num);
           printf("Binary equivalent of decimal number %d is %d", num, a);
           break;
       }
   }
}

int num_to_binary(int n)
{
    if (n==0) {return 0;}
    else
    {
        return (n%2)+10 * num_to_binary(n/ 2);
    }
}