/*

A Guessing Game: With this program the user has to guess a number that the program has picked as the lucky number . it uses one for loop and penty of if statements.

Ans:

So, What we are doing to do is that we will take a random number between 1 to 100 from math.h library,

Then we will ask the user to guess the number with 100 tries,

and if the number user entered is less than the lucky number,

We will let him know 

And Vicee versa

Until Its Matched

*/


//number = rand()%100 + 1;


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

srand(time(NULL));

int luckyNum, userNum, guesses = 100;

luckyNum = rand()%100 + 1;

printf("%d\n", luckyNum);

printf("Hey!, Guess the number to see if you are correct or not:\n");
printf("Make sure that you only enter a integer between 1 to 100:\n>>>");

scanf("%d", &userNum);



for (int i = 1; i <= 100; i++)
{
  guesses -= i;
  if(userNum > luckyNum)
  {

    printf("The Nummber You entered is bigger than the lucky Number\n");
    printf("Please Try Again\n>>>");
    printf("Number of guesses left: %d\n>>>", guesses);
    scanf("%d", &userNum);

  } else if (userNum < luckyNum)
  {
    printf("The Nummber You entered is smaller than the lucky Number\n");
    printf("Please Try Again\n>>>");
    printf("Number of guesses left: %d\n>>>", guesses);
    scanf("%d", &userNum);
  } else {
    printf("Woohooo!, You Guessed the number correctly. The number was: %d", luckyNum);
    break;
  }
  
}


}













