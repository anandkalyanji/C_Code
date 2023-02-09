#include<stdio.h>
#include<conio.h>


long double fact (int ) ;

void main ()
{
   long double n , f  ;

    printf("Enter the number \n") ;
    scanf("%Lf" , & n ) ;
    f = fact (n) ;
    printf("\n Factorial of a number is %Lf" , f ) ;
}
   long double fact(int x )
{ 
     if (x==0)
     return (1) ;
    else
     return(x*fact(x-1)) ;
    

    getche();
}