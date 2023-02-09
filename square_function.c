#include<stdio.h>



int SquareRoot (int s) ;

int main () {
    int s ;
printf("Enter the number \n") ;
SquareRoot(s) ; 

}


// SqaureRoot means 

int SquareRoot (int s) {
   
   scanf("%d" , &s) ;
   
   if (s==0)
   {
    puts("Condition not true") ;
   }
   else {
    printf("the squareroot of number is : %d" , s*s ) ;
   }
   


}