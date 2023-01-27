// Write a C function  complex add(complex n1, complex n2) to add two complex numbers by passing 2 structures to the function and return the result from the function.

typedef struct complex
{
    float real;
    float imag;
}complex;

complex add(complex n1, complex n2) {
    complex xeroxcopy;
    xeroxcopy.real= n1.real + n2.real;
    xeroxcopy.imag= n2.imag + n1.imag;
        
    return xeroxcopy;
    
    
}