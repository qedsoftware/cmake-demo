#include <iostream>  
#include <cmath> 
#include "pi.h"
#include "lament.h"

int main(int argc, char* argv[])  
{  
    // math demo
    printf("*** MATH DEMO ***\n"); 
    double x = 0.31415926;
    double result = sin(x); 
    printf("The sine of %lf is %lf\n\n", x, result);

    // custom libraries demos
    printf("*** CUSTOM LIBRARY DEMO: LAMENT ***\n");
    lament();

    printf("*** CUSTOM LIBRARY DEMO: PI ***\n");
    std::cout << "Approximation to PI: " << approximate_pi() << std::endl;

    return 0;  
}
