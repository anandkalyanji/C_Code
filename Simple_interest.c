#include<stdio.h>
#include<conio.h>

int main ()
{
    int Amt , Prnc , rt , tm ;
    
    printf("Enter the final amount ") ;
    scanf("%d" , & Amt ) ;

    printf("Enter the Intial Principal balance") ;
    scanf("%d" , & Prnc) ;

    printf("Enter the Annual Interest rate") ;
    scanf("%d" , & rt )  ;

    printf("Enter the Time [in years] ") ;
    scanf("%d" , & tm) ;

    printf("THE SIMPLE INTERET IS : %d" , Amt = Prnc*(1+rt*tm)  ) ;

   
    getche() ;
}