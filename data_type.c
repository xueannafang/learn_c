#include <stdio.h>

// int a, b;
const int a = 5;
const int b = 2;


int main(){
    // a = 5;
    // b = 2;

    float test_float = 3.5;
    double test_double = 4;

    // printf("%.2f\n", test_float);
    // printf("%.4lf\n", test_double);//double is 8 byte; sufficient for 8-15 decimal digits

    float sum = a/b;
    float trans_sum = (float) a/b;

    printf("not converted answer: %.2f\n", sum);
    printf("converted answer: %.2f", trans_sum);


    return 0;
}