// Assignment 2 - Scheduling to balance workloads
// IDEaS Workshop Week 5: HPC

#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include <unistd.h>
#include <time.h>
#include "timer.h"

#define ITERATIONS 1000

int main() 
{
    // setup ~
    int max_threads = omp_get_max_threads();
    double times[max_threads];

    for(int m = 0; m < max_threads; m++){
        
        // get nthreads ~ use this in your pragma!
        int nthreads = m + 1;
        
        double t0 = time_in_seconds();

        // ==> Drop a pragma and schedule clause to the loop below! <== //    
       
        for(int i = 0; i < ITERATIONS; i++){
            // emulate work 
            usleep(i);
        }
        
        // ==> Drop a pragma and schedule clause to the loop above! <== //    

        double t1 = time_in_seconds();
        times[m] = t1 - t0;    
        printf("Time with %d threads: %f, Speedup: %f\n", m, times[m], times[0]/times[m]);
    }
    
}
