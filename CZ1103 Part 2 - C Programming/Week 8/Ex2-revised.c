#include <stdio.h>

void average(int number){
    double sum = 0;
    int len = 0;
    while (number!=0){
        int last_digit = number%10;
        sum += last_digit;
        len++;
        number/=10;
    }
    printf("Average: %.2f\n", sum/len);
}

int main(){
    int number_of_lines;
    int n=0;
    printf("Enter number of lines: ");
    scanf("%d", &number_of_lines);


    while (number_of_lines!=0){
        unsigned int line;
        printf("Enter line %d (end with -1): ",n+1);
        scanf("%d", &line);
        fflush(stdin);
        average(line);
        number_of_lines--;
        n++;
    }
    return 0;
}
