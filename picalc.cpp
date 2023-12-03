#include <iostream>
#include <time.h>
#include <omp.h>
#include <vector>

double stdrand(){
    return rand()/(1.0 * RAND_MAX);
}

double mean(std::vector<double> x){
    double sum = 0;
    for(int i=0; i<x.size(); i++){
        sum += x[i];
    }
    return sum/x.size();
}

double stddev(std::vector<double> x){
    double sum, sum2;
    for(int i=0; i<x.size(); i++){
        sum += x[i];
        sum2 += x[i] * x[i];
    }
    double mean = sum/x.size();
    return sum2/x.size() - mean*mean;
}

int main(){
    int N = 10000;  
    std::vector<double> pi_array;
    #pragma omp parallel
    {
        int count = 0;
        double a1, a2, private_pi;
        unsigned int seed;
        seed = time(NULL) * omp_get_thread_num()>>3+23;
        srand(seed);
        for(int i=0; i<N; i++){
            a1 = stdrand();
            a2 = stdrand();
            // std::cout << a1 << ' ' << a2 << std::endl;
            if (a1*a1 + a2*a2 <= 1){
                count++;
            }
        }
        private_pi = 4 * count/(1.0 * N);
        // std::cout << private_pi << std::endl;
        #pragma omp critical
        pi_array.push_back(private_pi);
    }
    double pi_mean = mean(pi_array);
    double pi_stddev = stddev(pi_array);
    std::cout << "pi= " << pi_mean << " +/- " << pi_stddev 
    << " with " << pi_array.size() << " repeats" << std::endl;



    return EXIT_SUCCESS;
}