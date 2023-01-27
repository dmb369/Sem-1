// Write a C program that reads a number (in hexadecimal system) as input and convert it into its equivalent binary value, using functions and pointers.

void func_hexdec(char *hexdec)
{
    for ( int i=0; hexdec[i]!='\0'; i++)
    {
        if (hexdec[i]=='0') { printf("0000"); }
        else if (hexdec[i]=='1') { printf("0001"); }
        else if (hexdec[i]=='2') { printf("0010"); }
        else if (hexdec[i]=='3') { printf("0011"); }
        else if (hexdec[i]=='4') { printf("0100"); }
        else if (hexdec[i]=='5') { printf("0101"); }
        else if (hexdec[i]=='6') { printf("0110"); }
        else if (hexdec[i]=='7') { printf("0111"); }
        else if (hexdec[i]=='8') { printf("1000"); }
        else if (hexdec[i]=='9') { printf("1001"); }
        else if (hexdec[i]=='A' || hexdec[i]=='a') { printf("1010"); }
        else if (hexdec[i]=='B' || hexdec[i]=='b') { printf("1011"); }
        else if (hexdec[i]=='C' || hexdec[i]=='c') { printf("1100"); }
        else if (hexdec[i]=='D' || hexdec[i]=='d') { printf("1101"); }
        else if (hexdec[i]=='E' || hexdec[i]=='e') { printf("1110"); }
        else { printf("1111"); }
    }
}