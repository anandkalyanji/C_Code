#include<stdio.h>
#include<conio.h>

void calculatePrice (float value) ; 
int main () 
{
   printf("enter the value intial value :") ;
   int value ;
   scanf("%d" , & value ) ;

   calculatePrice (value ) ;

 


   getche () ;
}
void calculatePrice (float value) 
  {
   value = value + (0.18 * value ) ;
   printf("final price is : %f" , value ) ;
}


