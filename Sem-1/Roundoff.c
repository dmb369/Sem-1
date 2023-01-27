// Write a function, roundoff, that takes a real number and rounds it off to its nearest integer.

int roundoff(float n)
{
    int num=n;
    if (n-num>=0.5) { return num+1; }
    else { return num; }
}