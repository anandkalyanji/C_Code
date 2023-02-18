#include<stdio.h>

struct STUDENT // [Outer-structure]
{
   char name [20] ;
   int rno ;
   float fee ;

   // Nesting of the structure .

      struct DOB // [Inner - structure ]
    {
       int d ;
       int m ;
       int y ;
    } dob ; // GIVING THE VARIABLE OR CALLED SUB-Name TO inner STRUCTURE 

} Anand ; // GIVING THE VARIABLE OR CALLED SUB-Name TO outer STRUCTURE

void main ()  { // main function

// Assiging value by the COMPILE TIME METHOD {THIS THE EXAMPLE of compile time} 

// Compile time means pre defining the value of variables before the execution of the program

// Calling the structure to assign the value 
Anand.rno = 102 ; 
Anand.fee = 2465.78 ; 
Anand.dob.d = 24 ;
Anand.dob.m = 8 ;
Anand.dob.y = 2003 ;

// Printing the assigned the value to called variables of the structure 

printf("\n The Roll No of Student : %d \n" , Anand.rno ) ; 
printf("\n The Fees for the Student : %f \n" , Anand.fee ) ;
printf("\n The Birth Day  of Student : %d \n" , Anand.dob.d ) ;
printf("\n The Birth Month  of Student : %d \n" , Anand.dob.m ) ;
printf("\n The Birth year of  Student : %d \n" , Anand.dob.y ) ;
}

/* Use this function ; If values to float data types misbehaves and show incorrect results because compiler in structures not know till 
   range of float
   
   But this is a optional one and not essential to include everytime in a structure program

   This additional function is only to be defined and not should be called to the main function

   [     
      The function is : 
\\------------------------------//
      void linkfloat () 

      {
         float a , *p ;
         p = &a ;
         a = *p ;
      }
   
\\------------------------------//
   
   
   
   ]

 */ 



