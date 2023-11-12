#include <stdio.h>
#include <stdlib.h>

int test_n;
int test_thres;

void test_if(int n, int thres){
    if(n>thres){
        printf("%d is larger than %d", n, thres);
    }
    else if(n==thres){
        printf("%d equals to %d", n, thres);
    }
    else{
        printf("%d is smaller than %d", n, thres);
    }

}

void short_if(int n, int thres){
    (n <= thres) ? printf("%d is smaller than or eqaul to %d. \n", n, thres) : printf("%d is larger than %d. \n", n, thres); //this is a short version of if_elif function, but can only handle binary conditions.
}
// The argumnets in main is command line arguments;
// argc is number of aruguments, also known as argument count; User don't need to type argc when exe the program;
// argv is the value of each argument (type char, starting with *); * stands for pointer. argv is the address. argv[] is an array;
//The first argv is the program name; The reamining arguments are inputs;
int main(int argc, char *argv[]){
    printf("Program starts with %d.\n", argc);
    for(int n_arg = 0; n_arg < argc; n_arg++){
        printf("The value of %d th argument in the *argv[] is %s: \n", n_arg, argv[n_arg]);
    }

    //start main program

    test_n = atoi(argv[1]);
    test_thres = atoi(argv[2]);

    int option = atoi(argv[3]);
    if(option == 1){
        printf("Longer version is executed. \n");
        test_if(test_n, test_thres);
    }
    else if(option == 2){
        printf("Shorter version is executed. \n");
        short_if(test_n, test_thres);
    }


    

    return 0;
}