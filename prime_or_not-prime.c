// a whole number greater than 1 that cannot be exactly divided by any whole number other than itself and 1 (e.g. 2 )
#include<stdio.h>
#include<conio.h>

int main ()
{
    char  a ;
    printf("Enter the number : \n") ;
    scanf("%d" , & a) ;
    switch (a)
    {
        case '!a%2==0':
          printf("this is  a prime number") ;
        break;
         case '!a%3==0':
          printf("this is  a prime number") ;
        break;
        case '!a%4==0':
          printf("this is  a prime number") ;
        break;
        case ' !a%5==0':
          printf("this is  a prime number") ;
        break;
        case '!a%6==0':
          printf("this is  a prime number") ;
        break;
        case '!a%7==0':
          printf("this is  a prime number") ;
        break;
        case '!a%8==0':
          printf("this is a prime number") ;
        break;
        case '!a%9==0':
          printf("this is a prime number") ;
        break;
        case '!a%10==0':
          printf("this not a prime number") ;
        break;
    
    default  :
       printf("This not a prime number ") ;

        break;
    }
    getch () ;
}
/* Explanation :->
  i) If the value of a is from '!a%2==0' to '!a%10==0' , then the message printed is "this is a prime number".
 ii) The code first declares two variables: one to hold the character input by the user, and another to hold the integer input by scanf().
iii) The main() function starts by printing an introductory message and asking for user input.
 iv) Next, it calls two functions: one to check if a number entered by the user is prime (i.e., not divisible by any other numbers), and another to print out different messages depending on whether or not that number is prime.
*/