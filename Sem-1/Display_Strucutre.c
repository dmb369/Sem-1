// Write a C function called display(struct employee e[], int n) to store n employees using structures and display their details by passing structure to a function.

struct employee{
    char ename[20];
    int eid;
};

void displayEmpDetails(struct employee e[], int n) {
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%s\n", &e[i].ename);
        scanf("%d\n", &e[i].eid);
    }
    for (int i=0; i<n; i++)
    {
        printf("%s %d\n", e[i].ename, e[i].eid);
    }
}

