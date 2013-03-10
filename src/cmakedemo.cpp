#include <iostream>  
#include <boost/thread.hpp>   
#include <boost/date_time.hpp>       
#include <cmath> 
#include "pi.h"
#include "lament.h"

void workerFunc()  
{  
    boost::posix_time::seconds workTime(2);          
    std::cout << "worker: running" << std::endl;    
    boost::this_thread::sleep(workTime); // pretend to do something useful
    std::cout << "worker: finished" << std::endl;  
}   

int main(int argc, char* argv[])  
{  
    // Boost demo using POSIX threads
    printf("*** BOOST DEMO ***\n"); 
    std::cout << "main: startup" << std::endl;          
    boost::thread workerThread(workerFunc);    
    std::cout << "main: waiting for thread" << std::endl;          
    workerThread.join();    
    std::cout << "main: done" << std::endl << std::endl;

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
