#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1;
    puts("Enter your Guess Number!(1-100)");
    scanf("%d", &guess);
    int i = 1;
    do
    {
        if (guess > number)
        {
            printf("Try a smaller number!");
            scanf("%d", &guess);
        }
        else if (guess < number)
        {
            printf("Try a bigger number!");
            scanf("%d", &guess);
        }
        else
        {
            printf("You win! It took you %d tries!", i);
        }
        i++;
    } while (number != guess);
    printf("You win! It took you %d tries!", i);
    return 0;
}
