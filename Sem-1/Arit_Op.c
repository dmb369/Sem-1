//Write a C program to find the distance traversed by an object with an initial velocity 'u' and moving with constant acceleration 'a' in time period 't'.

#include<stdio.h>
int main(){
    int u,a,t,d;
    scanf("%d %d %d",&u,&a,&t);
    d=u*t+0.5*a*t*t;
    printf("%d",d);
}