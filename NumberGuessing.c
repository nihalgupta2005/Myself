#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random,guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n");
    random = rand() % 100 + 1; // Generate a random number between 0-100
    do {
        printf("Please enter your guess between(1-100): ");
        scanf("%d", &guess);
        no_of_guess++;
        if(guess < random) {
            printf("Guess a larger number\n");
        } else if(guess > random) {
            printf("Guess a smaller number\n");
        } else {
            printf("Congratulations! You have guessed the correct number\n");
            printf("You have guessed the number in %d attempts\n", no_of_guess);
        }
   
    } while (guess != random);

    printf("Thank you for playing the game\n Bye Bye\n Developed by Nihal Gupta\n");

}