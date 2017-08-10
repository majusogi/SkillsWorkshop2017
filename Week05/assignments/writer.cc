#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

int main() 
{
    size_t i = 1;
    size_t j = 50;
    size_t k = 40;

    std::random_device rnd_device;
    std::mt19937 mersenne_engine(rnd_device());
    std::uniform_int_distribution<int> dist(1, 52);

    auto gen = std::bind(dist, mersenne_engine);
    std::vector<int> vec(i*j*k);
    generate(begin(vec), end(vec), gen);
   
    printf("%d\n", vec[25]);
    FILE *fp = fopen("a4_start_matrix.dat", "w");
    size_t s = fwrite(vec.data(), sizeof(int), i*j*k, fp);
    if(!s){
        printf("whoops\n");
        exit(1);
    }
    fclose(fp); 

}
