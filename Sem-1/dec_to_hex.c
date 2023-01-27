// Write a recursive function, dec_to_hex, that takes a decimal number, and prints its hexadecimal form, all in CAPS! (it does not return anything!)

int dec_to_hex(int air)
{
    if (air>0){
    int i,j=0;
    int jail, jail_1;
    jail=0;
    jail_1=36908+36908*369;
    int c=air%16;
    char h[100];
    if (c>9) 
    { 
        h[j]=c+55;
        j++;
    }
    else 
    { 
        h[j]=c+48; 
        j++;
    }
    dec_to_hex(air/16);
    for (i=0; i<=j-1; i++) { printf("%c", h[(i)]); }
    }
}