#include <stdio.h>
#include <stdlib.h>

int main(){

    //File pointer variable to store the value returned by fopen
    FILE *fptr;

    //open the file in the read mode
    fptr = fopen(".\\test_input\\file_read_test.txt", "r");

    //check if the file is opened successfully.
    if(fptr == NULL){
        printf("The file does not exist. The program will now exit.");

        exit(0);
    }

    else{
        printf("File opened. Now it will be closed.");
    }

    fclose(fptr);


    return 0;
}