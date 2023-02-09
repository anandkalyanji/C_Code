
// WRITE A PROGRAM TO CALCULATE PERIMETER OF THE RECTANGLE  

#include<stdio.h>
#include<conio.h>

long int main ()

{
    long int width , height ;


    printf("Enter the width of the Rectangle") ;
    scanf("%ld" , & width ) ;

     
    printf("Enter the length of the Rectangle") ;
    scanf("%ld" , & height) ;


    printf("The Perimeter of the rectangle is : %ld", 2*(width + height) ) ; 
    
    
    printf("Enter valid dimensions ") ;
   


   getche();
}