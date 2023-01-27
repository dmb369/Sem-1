// Write a C program to read a string. 
// And display the frequency of letters in the string using functions and pointers.

void freq(char *s) 
{
    int i, freq[26]={0};
    for (i=0; s[i]!='\0'; s++) { freq[s[i]-'a']++; }
    for (i=0; i<26; i++)
    {
        if (freq[i]!=0) { printf("%d%c",freq[i],i+'a'); }
    }
}