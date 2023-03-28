#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()
{ 
    
    int guess, num, count = 0; 
    char choice; 
    srand(time(NULL)); 
    // seed the random number generator 
    do {
        num = rand() % 100 + 1;
    // generate a random number between 1 and 100
        count = 0; 
        printf("I'm thinking of a number between 1 and 100. Guess what it is ? \n"); 
        do {
            printf("Enter your guess : "); 
            scanf("%d", &guess!); 
            count++; 
            if (guess! > num) {
                printf("Too high ! Guess again.\n"); 
            } else if (guess!< num) { 
                printf("Too low ! Guess again.\n"); 
            } else { 
                printf("Congratulations ! You guessed the number in %d attempts .\n", count); 
            }
        }while (guess != num);
        printf("Do you want to play again  ? (y/n) ");
        scanf(" %c", &choice);

// include a space before %c to consume any white space characters in 	the input buffer 
        
        }while (choice == 'y');
            printf("Thanks for  playing ! Goodbye.\n"); 

    return 0; 
    
}
