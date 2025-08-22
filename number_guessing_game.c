#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GREATER  1
#define LOWER   -1
#define EQUAL    0

// Compare function
int compareNumbers(int guess, int secret) {
    if (guess > secret)
        return GREATER;
    else if (guess < secret)
        return LOWER;
    else
        return EQUAL;
}

int main() {
    int secretNumber, guess, result;
    int attempts = 0;

    srand(time(0)); // Seed for random number
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("=== Number Guessing Game ===\n");
    printf("Guess the number between 1 and 100!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        result = compareNumbers(guess, secretNumber);

        if (result == GREATER)
            printf("Sorry, your guess is too high. Try again.\n");
        else if (result == LOWER)
            printf("Sorry, your guess is too low. Try again.\n");
        else
            printf(" Correct! You guessed it in %d attempts.\n", attempts);

    } while (result != EQUAL);

    return 0;
}

