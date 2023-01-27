// Write a C function named, tri_pattern, that reads a positive integer n and then prints the following pattern (underscores followed by stars, and an empty line between two lines).

tri_pattern(int x)
{
    int sum=0;
    
    for (int ink=1; ink<=x; ink++)
    {
       for (int j=1; j<ink; j++) { printf("_"); }
       for (int k=ink; k<=x; k++) { printf("*"); }
       printf("\n");
       printf("\n");
    }
    
}
    
