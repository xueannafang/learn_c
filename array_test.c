#include <stdio.h>
#include <string.h>


int test_array[] = {1, 1, 2, 3, 5};

//note that the size of the array cannot be changed.
//ALso the size here is memory size and can represent the maximum size.
//we can define the size of the array by doing below:

int fixed_size_array[10];

int size_array(int *input_array){
    int size_of_array = sizeof(input_array);
    return size_of_array;

}

// to define a matrix
int test_mat[2][3] = {{1, 2, 3}, {4, 5, 5}};

//string is an array;
char test_string[] = "Hey there, I'm not using Whatsapp.";

char test_string_2[] = " something to cat.";
char empty_string[50];//the string to be copied must be an empty one 

int main(){
    int i = 4;
    int to_change = 44;
    printf("The %d th number in this array is: %d. \n", i, test_array[i]);
    test_array[i] = to_change;
    printf("The %d th number in this array has been updated as : %d. \n", i, test_array[i]);

    int size_of_first_array = sizeof(test_array);
    int size_of_second_array = sizeof(fixed_size_array);

    // int size_of_first_array = size_array(test_array);
    // int size_of_second_array = size_array(fixed_size_array);

    printf("Size of: %d\n%d\n", size_of_first_array, size_of_second_array);

    //print string
    printf("The test string is: %s. \n", test_string);

    //print length of string
    printf("String length using lenstr(): %d.\n", strlen(test_string));

    //cf sizeof function, which will include the null character in a string.
    printf("String length using sizeof(): %d. \n", sizeof(test_string));

    //string addition need to use strcat function as below:
    //note that the new string will be stored in the first string.

    // strcat(test_string, test_string_2);
    // printf("Concated string: %s. \n", test_string);
    // printf("size of concated string using strlen: %d. \n", strlen(test_string));
    // printf("size of concated string using sizeof: %d. \n", sizeof(test_string));
    

    //copy string 1 to string 2
    strcpy(empty_string, test_string);

    // strcpy(test_string, test_string_2);
    printf("knock knock.\n");
    
    // printf("string 1: %s. \n", test_string);
    // printf("copied string: %s. \n", test_string);

    //compare different strings
    printf("Difference? %d\n.", strcmp(test_string, test_string_2));
    printf("Difference 2? %d\n.", strcmp(empty_string, test_string));


    return 0;
}