#include <stdio.h>

int main() {
    int age=45;
    // print out using format specifier
    printf("You are %d yeras old\n", age); 
    age=95;
    printf("Your new is now %d yeras\n", age); 

    double n = 12.5;
    float h = 0.5;
    char a = 'T';

    printf("%lf", n); 
    printf("\n%f", h);
    printf("\n%c\n", a);

    return 0;
}