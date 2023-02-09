//This PRORAM TAKES A NUMBER  AND GIVES THE OUTPUT AS THE CUBE OF THE NUMBER 

#include<stdio.h>  //PRE-PROCESSOR AND (.H- INCLUDE HEADER FILE)

#include<conio.h>  



long int main ()   // THE MAIN FUNCTION


{  
  long int n ;   // GIVING THE DATA-TYPES ALONG WITH THE VARIABLES

 printf("Enter the Number") ;

// TAKING INPUT FROM THE USER 
 scanf("%ld" , & n ) ;  
    

//PRINTING THE OUTPUT TO THE USER
 printf("The cube of the given no. is : %ld" , n*n*n ) ; 


//  THIS FUNCTION USED TO HOLD THE RESULT ON THE SCREEN  ?
getche () ;

}