#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0)); // uses the current time as a seed

    answer = (rand() % MAX) + MIN; // generate random number beetween MIN and MAX

    do
    {
        printf("Enter a Number: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("too low!\n");
        }
        else
            printf("CORRECT !!!\n");
        guesses++;
    } while (guess != answer);

    printf("answer : %d\n", answer);
    printf("attemps: %d\n", guesses);

    return 0;
}