// Write a function, count_substring_freq, that takes two strings, and counts the number of times the first string occurs as a substring in the second one. 
// The strings will not be passed as arguments to your function. Your function should scan both the strings, and return the output, it should not print anything.
// Assume both strings have a maximum length of 50.

int count_substring_freq()
{
    char sub[100], string[100];
    scanf(" %[^\n]s", sub);
    scanf(" %[^\n]s", string);
    int air=strlen(sub);
    int bag=strlen(string);
    int count=0, count_1=0;
    for ( int ink=0; ink<=(bag-air); ink++)
    {
        int jail;
        for ( jail=0; jail<air; jail++)
        if ( string[ink+jail]!=sub[jail] ) break;
        if (jail==air) count++;
    }
    return count;
}