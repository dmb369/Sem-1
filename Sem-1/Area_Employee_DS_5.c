// Write a C program with 2 structures which accepts employee details like 
// (outer structure Employee: name, empid, sal and (inner structure address: area, stno, hno)) where stno and hno are street number and house number respectively.
// Also, read the area of the employee to check and display the employee names and id belonging to that particular area.

#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int empid;
    int sal;
    struct address {
        char area[50];
        int stno;
        int hno;
    } a[20];
} b[20];

int main()
{
    int num;
    scanf("%d",&num);
    for (int icecream=0; icecream<num; icecream++)
    {
        scanf("%s", &b[icecream].name );
        scanf("%d", &b[icecream].empid );
        scanf("%d", &b[icecream].sal );
        scanf("%s", &b[icecream].a[icecream].area );
        scanf("%d", &b[icecream].a[icecream].stno );
        scanf("%d", &b[icecream].a[icecream].hno );
    }

    char area_1[50];
    scanf("%s", &area_1);

    for (int j=0; j<num; j++)
    {
        if (strcmp (area_1, b[j].a[j].area) == 0)
        {
            //printf("1");
            printf("%s %d", b[j].name, b[j].empid);
        }
    }
}