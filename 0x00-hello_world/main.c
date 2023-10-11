#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Initialize the random number generator
    srand(time(NULL));

    // Generate a random number between -100 and 100
    n = rand() % 201 - 100;

    // Print the random number
    printf("The number is: %d\n", n);

    // Check if the number is positive, negative, or zero and print accordingly
    if (n > 0) {
        printf("The number is positive\n");
    } else if (n < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }

    return 0;
}
