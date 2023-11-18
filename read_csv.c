#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This program is to read from csv file.

//We need to know the meaning of each column and separators before loading the file.

char file_name_atom_table[] = ".\\test_input\\file_read_test_SCT_IPA_atom_table_no_title_line.csv";
// char file_name_bond_table[] = ".\\test_input\\file_read_test_SCT_IPA_bond_table.csv";
char error_reading_file_msg[] = "Error: File not exists. Good bye!\n";
char error_row_formatting_msg[] = "Error: Format of the file incorrect. Good bye!\n";
char error_ferror_file_msg[] = "Error of reading file. Good bye!\n";

//First step: define the structure of table.
//Take the atom table first. The first column is atom index (integer). The second is atom type (string)
typedef struct{
    int atom_idx;
    char atom_type[5];
} Atom_table; //the name of the struct object better to be capitalised.
    

int main(void){

    //read the atom_table
    FILE *fptr_atom_table;
    fptr_atom_table = fopen(file_name_atom_table, "r");
    
    //every time after open a file, check if it is successfully opened.
    if(fptr_atom_table == NULL){
        printf("%s.\n", error_reading_file_msg);
        exit(0); //or return 1
    }
    
    //no need to do an else branch.
    Atom_table atoms[100];

    //row, and initialise as 0
    int read = 0;
    //each row content
    int records = 0;

    //start reading this file.
    //fscanf will read the file row by row.
    //The first argument of fscanf is the file pointer.
    //The next argument is the structure of each line.
    //%num[^,] means read up to num characters, but stop matching at the first comma.
    //For non-array objects, the next argument is the memory address (starting with &).
    do{
        read = fscanf(fptr_atom_table,
        "%d, %s\n",
        &atoms[records].atom_idx,
        atoms[records].atom_type);

        //check if everything is read by expected number of entries in a row. In this case is 2.
        //adding one records if this is correct.
        if(read == 2) records ++;

        //in the other case, length not 2 and not at the end of file, return error message and exit

        if(read != 2 && !feof(fptr_atom_table)){

            printf("%s.\n", error_row_formatting_msg);
            return 1;

        }

        //finally check if there is any error reading file.

        if(ferror(fptr_atom_table)){
            printf("%s. \n", error_ferror_file_msg);
            return 1;

        }
    }while(!feof(fptr_atom_table));
    fclose(fptr_atom_table);

    //print out the information we just stored from the file.

    //number of records.
    printf("%d of records read.\n", records);

    //read each item using a loop.
    for(int i = 0; i < records; i++){
        printf("%d, %s.\n", atoms[i].atom_idx, atoms[i].atom_type);

    }
    printf("End.\n");
    return 0;
}