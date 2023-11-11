#include <stdio.h>

const float PI = 3.14; //global variable

float circle()
{
    float r = 5; //local variable
    float area;
    area = PI*r*r;
    return area;

}


int main()
{
    printf("pi is %.2f\n", PI); // f is for float; d and i are for int
    printf("Area of the circle is = %.3f\n", circle());

    return 0;
}