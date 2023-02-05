#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess, x=1;
    srand(time(0));
    number = rand()%100 + 1;
    /* do while loop is used because the game needs 
    to run at least once */
    do{
        printf("Guess a number between 1 and 100\n");
        scanf("%d", &guess);
        if (number<guess){
            printf("Lower the number please\n");
        }
        else if(number>guess){
            printf("Higher number please\n");
        }
        else{
            printf("You have guessed the number in %d tries!", x);
        }
        x++;
    }while(guess != number);
    return 0;
}
