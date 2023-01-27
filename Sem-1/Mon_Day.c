// Write a C program to read the number of days as input and convert days into months and to a number of days.

#include <stdio.h>
int main(){
    int x, mon, day;
    scanf("%d", &x);
    mon=x/30;
    day=x%30;
    printf("%d %d", mon, day);
}