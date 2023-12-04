#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. Is the Earth Round or Flat?: ",
                             "2. Who invented Bitcoin?: ",
                             "3. Who invented the worchestercshire sauce?:"};

    char options[][100] = {"A. Round", "B. Flat", "C. It's elliptic BOZO",
                           "A. Barack Obama", "B. Satoshi Nakamoto", "C. Sonic",
                           "A. Mario", "B. Prince of Canada", "C. William Henry Perrins"};

    char answers[3] = {'C', 'B', 'C'};
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    printf("QUIZ TIME !!!!!!!\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("*****************\n");
        printf("%s\n", questions[i]);
        printf("*****************\n");

        for (int j = (i * 3); j < (i + 1) * 3; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess : ");
        char guess;
        scanf(" %c", &guess);
        getchar(); // clear the \n from the input buffer
        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("CORRECT !!!\n");
            score++;
        }
        else
        {
            printf("WRONG YOU SILLY APE !!!\n");
        }
    }
    printf("***********");
    printf("FINAL SCORE: %d/%d", score, numberOfQuestions);
    printf("***********");
    return 0;
}