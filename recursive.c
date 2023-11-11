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
    char cmd;

    for(;;){
    printf("Please enter a positive integer: \n");
    printf("(Press [enter] to continue or [q] to quit.) \n");
    scanf("%d%c", &n, &cmd);
    printf("The %d th number of the Fibbonacci is: \n", n);
    printf("The command is %c", cmd);
    
    if(cmd == 'q'){
        return 0;
    }

    fibo_n = fibo(n);
    printf("%d", fibo_n);
    }
    

    return 0;
}