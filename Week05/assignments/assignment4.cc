// Assignment 3 - Parallel tensor contraction
// IDEaS Workshop Week 5: HPC

#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include <unistd.h>
#include <time.h>
#include <vector>
#include <string>
#include "timer.h"
//#include <lapacke.h>

extern void dgemm_(char *transa, char *transb, int *m, int *n, int *k, double
        *alpha, double *a, int *lda, double *b, int *ldb, double *beta, double *c,
        int *ldc );
void read_start_tensor(int *vec, size_t n, std::string filename);
void check_answer(int *vec, int n);

int main() 
{
    size_t Q = 50;
    size_t p = 50;
    size_t q = 50;
    size_t l = 40;

    // allocate tensor Qpq of size (50, 50, 50) 
    std::vector<int> Qpq; 
    Qpq.reserve(Q * p * q);
    read_start_tensor(Qpq.data(), Q * p * q, "a4_start_tensor.dat");

    // alocate matrix ql of size (50, 40);
    std::vector<int> ql;
    ql.reserve(q * l);
    read_start_tensor(ql.data(), q * l, "a4_start_matrix.dat");

    // allocate final tensor of size (50, 50, 40)
    std::vector<int> Qpl;
    Qpl.reserve(Q * p * l);
    
    // setup ~
    int max_threads = omp_get_max_threads();
    
    // your code below., complete the contraction ~~


    
    // your code above., complete the contraction ~~

    


}

void read_start_tensor(int *vec, size_t n, std::string filename)
{
    FILE *fp = fopen(filename.c_str(), "r");
    size_t s = fread(vec, sizeof(int), n, fp);
    fclose(fp);
}

//void check_answer(int *vec, int n)
//{
//
//}
