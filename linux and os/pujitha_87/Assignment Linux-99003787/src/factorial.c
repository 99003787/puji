#include "myutils.h"
int facto(unsigned int n) 
{ 
    int fact = 1, i; 
    for (i =2; i <= n; i++) 
        fact *= i; 
    return fact; 
}