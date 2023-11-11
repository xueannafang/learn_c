#include <stdio.h>

int main(){

    float test_float = 3.5;
    double test_double = 4;

    printf("%.2f\n", test_float);
    printf("%.4lf\n", test_double);//double is 8 byte; sufficient for 8-15 decimal digits

    return 0;
}