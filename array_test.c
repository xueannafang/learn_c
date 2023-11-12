#include <stdio.h>


int test_array[] = {1, 1, 2, 3, 5};

//note that the size of the array cannot be changed.
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



int main(){
    int i = 4;
    int to_change = 44;
    printf("The %d th number in this array is: %d. \n", i, test_array[i]);
    test_array[i] = to_change;
    printf("The %d th number in this array has been updated as : %d. \n", i, test_array[i]);

    // int size_of_first_array = sizeof(test_array);
    // int size_of_second_array = sizeof(fixed_size_array);

    int size_of_first_array = size_array(test_array);
    int size_of_second_array = size_array(fixed_size_array);

    printf("Size of: %d\n%d\n", size_of_first_array, size_of_second_array);

    //print string
    printf("The test string is: %s. \n", test_string);




    return 0;
}