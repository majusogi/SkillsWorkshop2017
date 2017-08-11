// Assignment 1 - Hello World!
// IDEaS Workshop Week 5: HPC

#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

int main() 
{
    int nthreads = omp_get_max_threads();
    #pragma omp parallel num_threads(nthreads)
    {

        int thread_id = omp_get_thread_num();
        printf("Greetings! ~ from thread %d\n", thread_id); 

    }

}
