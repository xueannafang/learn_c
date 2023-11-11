#include <stdio.h>
//This is a test to learn recursive in c


int fibo(int n){

    if(n==0||n==1){
        return 1;
    }

    else{
        return (fibo(n-1)+fibo(n-2));
    }

}


int main(){
    int n, fibo_n;
    printf("Please enter a positive integer: \n");
    scanf("%d", &n);
    printf("The %d th number of the Fibbonacci is: \n", n);
    fibo_n = fibo(n);
    printf("%d", fibo_n);

    return 0;
}