// Write a C function displayStudent(struct student *s) with a structure pointer as a parameter pointing to a structure variable of student structure and print the details of student.

struct student{
    char name[20];
    int rollno;
    char branch[20];
    int batch;
}p1;

void displayStudent(struct student *s) {
    scanf("%s\n", s->name);
    scanf("%d\n", s->rollno);
    scanf("%s\n", s->branch);
    scanf("%d\n", s->batch);
    printf("%s %d %s %d", s->name, s->rollno, s->branch, s->batch);
}
