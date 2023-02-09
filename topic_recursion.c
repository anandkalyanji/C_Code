/* [prc.) factorial]

#include<stdio.h>



int fact(int n) ; 

int main () {
   
   int l ;
   printf("enter te number : ") ;
   scanf("%d" , & l) ;

  printf("factorial is : %Lf" , fact(l)) ;

}   


int fact(int n) {
    if (n==1)
    {
      return 1 ;
    }
    
    int factNm1 = fact(n-1) ;
    int factN = factNm1 * n ;
    return factN ;
}


 [ prc ques :) sum of first 'n' natural numbers  ]
int sum(int n) ;

int main () {
    int a ;
    printf("enter the number") ;
    scanf("%d" , &a ) ;

 
    // recursion calling 
    printf("sum is : %d" , sum(a)) ;

}

int sum(int n) {

    if (n==1)
    {
        return 1 ;
    }
    int sumNm1 = sum(n-1) ;
    int sumN = sumNm1 + n ;
    return sumN ;
    
 */
