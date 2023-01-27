// Write a program to print the calendar of a given month. 

#include<stdio.h>
int main(){
   int i,n;
   int a;
   scanf("%d",&a);
   scanf("%d",&n);
   if (a==1)
   {
        printf("Su Mo Tu We Th Fr Sa\n");
        for(i=1;i<=n;i++)
        {
            if (i<10) {printf(" %d ",i);}
            if (i>=10) {printf("%d ",i);}
            if ((a+i-1)%7==0) {printf("\n");}
            
        }
       
   }
   else 
   {
        int b=9-a;
        printf("Su Mo Tu We Th Fr Sa\n");
        for(i=1;i<b;i++) {printf("   ");}
        for(i=1;i<=n;i++)
        {
            if (i<10) {printf(" %d ",i);}
            if (i>=10) {printf("%d ",i);}
            if ((b+i-1)%7==0) {printf("\n");}
            
        }
    }
   return 0;
}