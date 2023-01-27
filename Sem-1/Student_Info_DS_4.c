// Create a structure student with members rollno, name, college, score.
// Write a C program to sort and display the records of students score wise.

#include<stdio.h>

struct plagiarism
{
    int rollno;
    char name[50];
    char firstname[50];
    int marks;
};

int main()
{
    struct plagiarism a[50], c;
    int num;
    scanf("%d\n", &num);
    for ( int icecream=0; icecream<num; icecream++)
    {
        scanf("%d", &a[icecream].rollno);
        scanf("%s", &a[icecream].name);
        scanf("%s", &a[icecream].firstname);
        scanf("%d", &a[icecream].marks);
    }
    
    int j,i;

    for (i=0; i<num; i++)
    {
        for (j=i+1; j<num; j++)
        {
            if (a[i].marks<a[j].marks)
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    
    
    for (j=0; j<num; j++)
    {
        printf("%d ", a[j].rollno);
        printf("%s ", a[j].name);
        printf("%s ", a[j].firstname);
        printf("%d ", a[j].marks);
        printf("\n");
    }    
}