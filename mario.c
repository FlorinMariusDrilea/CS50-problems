#include <stdio.h>
#include <cs50.h>

int main(void) {
    // Variables
    int height;

    // input
    do {
        height = get_int("Height: ");
    } while(height < 1 || height > 8);

    for(int i = 0; i < height; i++){
        for(int j = height - 1; j < i; j = j - 1) {
            printf(" ");
        }
        for(int h = -1; h < i; h++) {
            printf(" #");
        }
        printf("\n");
    }
}