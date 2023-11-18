#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //File pointer variable to store the value returned by fopen
    FILE *fptr;
    char ch;

    //open the file in the read mode
    fptr = fopen(".\\test_input\\file_read_test.txt", "r");
    // fptr = fopen(".\\test_input\\file_read_test.txt", "w");

    //check if the file is opened successfully.
    if(fptr == NULL){
        printf("The file does not exist. The program will now exit.");

        exit(0);
    }

    else{
        printf("File opened. The content is: \n");

        do{
            ch = fgetc(fptr);
            printf("%c", ch);

        } while(ch != EOF);
        //More on EOF: getc and some other file reading functions return EOF (end of file) when they reach the end of file.
        //The file pointer after reading a particular part of the file, will move to the last read character.
        
        //another way to break out the loop is to write !feof(fptr)
        printf("\nThe file will now be closed.\n");
        
    }

    

    fclose(fptr);


    return 0;
}