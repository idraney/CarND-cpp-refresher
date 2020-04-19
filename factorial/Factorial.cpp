#include "Factorial.h"

// Your code goes here! 
// See Factorial.h for your method's signature (eg, its args and return value).

int Factorial(int n)
{
    int fact = 1;
    
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    
    return fact;
}
