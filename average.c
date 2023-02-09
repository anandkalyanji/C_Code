// WRITE A PROGRAM TO PRINT THE AVERAGE OF 3 NUMBERS
#include<stdio.h>
#include<conio.h>

int main ()
{
    int a , b , c ;
    printf("ENTER THE FIRST NUMBER") ;
    scanf("%d" , & a) ;
    printf("ENTER THE SECOND NUMBER") ;
    scanf("%d" , & b) ;
    printf("ENTER THE THIRD NUMBER") ;
    scanf("%d" , & c) ;
    int sum ;
    sum = a+ b + c ;
    // FINAL [O/P] STATEMENT
    printf("the average of the numbers is : %d" , sum / 3) ;

    getche() ;

} 