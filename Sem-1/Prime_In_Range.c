// Write a program in C to find the prime numbers within a range of numbers.

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int n=a; n<=b; n++)
       {
        int i,flag=0;
        for(i=2;i<=n/2;i++)
            {
             if(n%i==0){
                 flag++;
                 break;
             }
        }
        if(flag==0 && n!= 1)
            printf("%d ",n);
    }
}
    