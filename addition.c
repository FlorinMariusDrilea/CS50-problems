#include <cs50.h>
#include <stdio.h>

int main(void) {
    double a = get_double("a is: ");
    double b = get_double("b is: ");

    printf("The answer is: %f\n", a+b);
}