#include <stdio.h>

void test(int to_test, int threshold){
    if(to_test > threshold){
        printf("%i is larger than %i\n", to_test, threshold);
    }else{
        printf("%i is smaller than %i\n", to_test, threshold);
        
    }

}


int main()
{
    int to_test = 10;
    // int threshold = 5;

    for(int threshold = 0; threshold < 20; threshold++){
        test(to_test, threshold);
    }

    return 0;
}