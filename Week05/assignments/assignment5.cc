// Assignment 4 - Resource sharing with prefix sum
// IDEaS Workshop Week 5: HPC

#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include <unistd.h>
#include <time.h>
#include <vector>
#include <tuple>
#include <math.h>
#include "timer.h"

// N > max_threads
#define N 20000

int main() 
{
    // setup ~
    int max_threads = omp_get_max_threads();
    double times[max_threads];

    // NxN matrix to be collapsed to N vector (initialized to all 1s)
    std::vector<std::vector<int>> mat(N, std::vector<int>(N, 1));

    for(int m = 0; m < max_threads; m++){
        
        int nthreads = m + 1;
        double t0 = time_in_seconds();
    
        // write answer to this vec
        std::vector<int> vec(N, 0);

        // ==> implement solution below! <== //    

   
 
        // ==> implement solution above! <== //    
        
        //check solution
        bool correct = 0;
        for(int i = 0; i < N; i++)
            correct = (vec[i] == N ? true : false);

        double t1 = time_in_seconds();
        times[m] = t1 - t0;    
        printf("(%d): Correct? %d, Time: %f, Speedup: %f\n", m, correct, times[m], 
            times[0]/times[m]);
    }
}
