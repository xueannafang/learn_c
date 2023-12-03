#include <stdio.h>


int main(){

    double A[2][3] = {{0, 1, 2}, {3, 4, 5}}; //This is a 2*3 matrix
    double B[3][2] = {{6, 7},{8, 9},{10, 11}};

    double C[2][2]; //This is the answer matrix

    // int n1, n2, n3, n4;
    // n1 = 2;
    // n2 = 3;
    // n3 = 3;
    // n4 = 2;

    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            C[i][j] = 0;
            for(int k = 0; k<3; k++){
                C[i][j] += A[i][k] * B[k][j];

            }
            printf("%lf, ", C[i][j]);
        }
        printf("\n");
    }

    




    return 0;
}