#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//The goal is to create a new file named file_write_test.txt

int main(){

    FILE *fptr;

    char file_path[] = ".\\test_output\\file_write_test.txt";
    char access_mode[] = "w";

    char text_to_be_write[] = "New text. \n This is a new line.\n";

    fptr = fopen(file_path, access_mode);

    //check if the file is created successfully

    if(fptr == NULL){
        printf("File not created. Exit now.\n");
        exit(0);
    }

    else{
        printf("File created. Writing starts.\n");
        if(strlen(text_to_be_write)>0){
            fputs(text_to_be_write, fptr);
            fputs("\n", fptr);
            printf("Wrting ends.\n");
        }

        fclose(fptr); //when closing the file, no need to put the star.

        //read the just written file.
        printf("Read this file...\n");

        fptr = fopen(file_path, "r");

        char ch;

        do{
            ch = fgetc(fptr);
            printf("%c", ch);

            }while(ch != EOF);

        
        printf("Reading complete.\n Now close.\n");
        fclose(fptr);
        
    }


    



    return 0;
}