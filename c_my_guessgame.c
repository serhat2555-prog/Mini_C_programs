#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int random_num, guess, number_of_attempts = 0;

  srand(time(NULL));

  random_num = rand() % 100 + 1;

  printf("Welcome to my number guessing game!\n");
  printf("Please guess a number between 1 and 100 :)\n\n");

  while(1)
  {
  printf("Enter your guess : ");
  scanf("%d",&guess);
  number_of_attempts++;

  if(random_num > guess)
  {
    printf("please enter a larger number.\n");
  }
  else if(random_num < guess)
  {
    printf("please enter  a smaller number.\n");
  }
  else
  {
    printf("Congratulations, your guess is correct :))\n");
    printf("Total number of attempts : %d",number_of_attempts);
    break;
  }
 
}
    return 0;

}