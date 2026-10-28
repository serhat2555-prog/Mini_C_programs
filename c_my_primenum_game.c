#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Is_prime_number(int guess);
int random_prime(int min, int max);

int main()
{
  int guess, prime_random_num, number_of_attempts = 0;
  srand(time(NULL));

  prime_random_num = random_prime(2, 100);

  printf(" Welcome my primenum game! \n");
  printf(" the computer kept a prime number .\n");
  printf(" Good luck :)\n\n");


  while(1) {
        printf("Enter your guess for the prime number between 2 and 100 : \n\n");
        scanf("%d",&guess);
        number_of_attempts++;
        if(!Is_prime_number(guess))
        {
          printf("The number you entered is not prime, please enter prime number :\n");
          continue;
        }
        
        
        if(prime_random_num> guess)
        {
          printf("please enter a larger number.\n");
        }
        else if(prime_random_num < guess)
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


int Is_prime_number(int guess)
{
  int i;

  for(i = 2; i < guess / 2; i++)
  {
    if(guess % i == 0)
    {
      return 0;
    }
  }
  return 1;

}


int random_prime(int min, int max)
{
  int prime_random_num;
  do {
      prime_random_num = rand() % (max - min + 1) + min;
  } while (!Is_prime_number(prime_random_num));
  return prime_random_num;

}