#include<stdio.h>

// Ques:) Write a function to print 'hot' or 'cold' depends on the temprature users enter.

void hot_or_cold (float a) ;


int main () {
  float a ; 
  // Calling it in main function
hot_or_cold (a) ;
getchar () ;
}



// function
void hot_or_cold (float a)
{
    
    
    printf("enter the temprature \n") ;
    scanf("%f" , &a ) ;


if (a>=25.00)
{
    printf("Its hot today") ;
}
else {
    printf("Its cold today") ;
}



}