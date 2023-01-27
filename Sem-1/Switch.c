// The program should request the user to input two numbers and display one of the
// following as per the desire of the user. (1). Sum of numbers (2) difference of numbers (3)
// product of the numbers (4)division of the numbers. Write a C program using a switch
// statement to accomplish the above task.

#include <stdio.h>

int main() {
   int x,y,res;
   scanf("%d %d",&x,&y);
   scanf("%d",&res);
   switch (res){
   case 1:
   printf("%d", x+y);
   break;
   case 2:
   printf("%d", x-y);
   break;
   case 3:
   printf("%d", x*y);
   break;
   case 4:
   printf("%d", x/y);
   break;
   }
}