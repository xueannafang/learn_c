#include <stdio.h>
// this is a fibonacci function; input n, return the nth fibonacci number

int a0 = 1;
int a1 = 1;

int fibo(int n){
    int a;

    for(int i = 0; i < n; i++){
        a = a0 + a1;
        a0 = a1;
        a1 = a;

    }

    return a0;
}


int main(){
    int n;
    printf("Please enter a positive integer: \n");
    scanf("%d", &n); //& means address

    printf("Thank you!\n");
    printf("Your number is %d \n", n);
    printf("Your number with & is %d \n", &n);

    int n_fibo;
    n_fibo = fibo(n);
    printf("The %dth number of the Fibonacci is: %d", n, n_fibo);

    return 0;
}