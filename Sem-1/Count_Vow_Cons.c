// C program to count vowels and consonants in a string using pointer.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int a=strlen(s);
    int cou_vow=0, cou_con=0;
    char *py=s;
    for ( int i=0; i<a; i++ )
    {
        if (*py=='A'||*py=='E'||*py=='I'||*py=='O'||*py=='U'||*py=='a'||*py=='e'||*py=='i'||*py=='o'||*py=='u')
        { cou_vow++; }
        else { cou_con++; }
        py++;
    }
    printf("vowels=%d ",cou_vow);
    printf("consonants=%d",cou_con);
    return 0;
}
