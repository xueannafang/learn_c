#include <stdio.h>

int case_num;

void today(int day_num){
    switch(day_num){
        case 1:
        printf("Monday");
        break;

        case 4:
        printf("Thursday");
        break;

        default:
        printf("You broke the rule of time!");


    }
}

int main(){
    case_num = 5;
    today(case_num);

    return 0;
}