// WRITE A PROGRAM TO CHECK IF GIVEN IS A INTEGERDIGIT OR NOT .

#include<stdio.h>
#include<conio.h>

int main ()
{
    int  a ;
    printf("press any character key on the keyboard") ;

    if ( scanf("%d" , &a )  ) // CONDITION 
    {
     printf("this a integer digit")   ;
    }
    else   // IF CONDITION NOT SATISFIED
    {
        printf("this is not integer digit") ;
    }
   getche() ;
}