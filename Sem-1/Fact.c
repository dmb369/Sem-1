// Define a recursive function, fact, which takes an integer n and returns its factorial. 
// Do not print anything inside the function, just return the value of the factorial. 

int fact(int k) 
{
  if (k > 1) { return k * fact(k - 1); } 
}