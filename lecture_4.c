#include<stdio.h>
#include<conio.h>

int main ()
{
  
    
  /*
  // Prc. Ques.) Print the reverse of the table for a number n.
  int e ;
  printf("Enter the number \n") ;
  scanf("%d" , & e ) ;

  for (int i =10; i >=1 ; i--)
  {
   printf("%d \n" , e*i ) ;
  }
   

  
  Prc. Ques.) Calculate the sumof all numbers between 5 and 50 [including 5 & 50].
  
  int sum = 0  ;
  int i ;
  for (int i = 5; i <= 50; i++)
  {
    sum = sum + i ;

  }
  printf("sum is %d" , sum  ) ;


    // prc ques.-)  PRINT THE  NUMBERS FROM 0 TO N , IF N IS GIVEN BY THE USER 

int n ;
 printf("enter the number") ; 
 scanf("%d" , &n) ;
// int i=0 ; 
//  while (i<=n)
//  {
//     printf("%d \n" , i ) ;
//     i++ ;
//  }
for (int i = 0; i <=n; i++)
{
    printf("%d \n" , i ) ;
}
      // [infinite loop]
   for(int i =1 ;  ; i++)
{
    printf("hello world") ; 
    }
  
  for(float i = 1.0 ; i<=5.0 ; i++)
  {
    printf("%f \n" , i) ;
  }
  for(char ch='a' ; ch<='z' ; ch++)
  {
    printf("%c \n" , ch) ;
  }
  



  [increment and decrement operator]
  
    printf("%d \n" , i++ ) ; // use and then , increase
    printf("%d \n" , i) ;
    printf("%d \n" , ++i ) ; // increase and then use ;
    printf("%d \n" , i) ;


[loop]
        for loop[syntax] -->
         for(intialisation ; condition ; updation) 
        {
               code to do something
        }
    
    for(int i=0 ; i>=11 ; i=i+1) // [i = iterator ; i= counter variable]
    {
     printf("%d \n" , i) ;
    }


// Prc. Ques.-) Print the sum of first 'n' natural numbers and also print them reverse.
  int n ;
  printf("Enter the number : ") ;
  scanf("%d" , & n ) ;

  int sum = 0 ;
  for (int i = 1 , j = n ; i <= n && j >= 1 ; i++ , j--)
  {
    sum = sum + i ;
    printf("%d \n" , j ) ;
      }
  printf("Sum is : %d \n" , sum ) ;

//   for (int i = n; i>=1; i--)
//   {
//     printf("%d \n" , i ) ;
//   }



// Prc. Ques.-) Print the table of numbers givenby the user
    printf("enter the number :") ;
    int n ;
    scanf("%d" , &n) ;
    for (int i = 1; i <= 10; i++)
    { printf("%d \n" , n*i) ;
    }
     

     [BREAK STATEMENT]
      
// Prc. Ques.) write a prog. to check and keep taking numbbers until user enters a odd number 
 int n ;
 do
 { 

  printf("enter the number") ;
  scanf("%d" , & n) ;
  printf("%d \n" , n ) ;

  if(n % 2 != 0 )
  {
    break ;
  }

 } while (1);
  
  printf(" : try again :") ;
  

 // Prc. Ques.) write a prog. to check and keep taking numbbers until user enters a number which is multiple of 7 

  int n ;
 do
 { 

  printf("enter the number") ;
  scanf("%d" , & n) ;
  printf("%d \n" , n ) ;

  if(n % 7 == 0 )
  {
    break ;
  }

 } while (1);
  
  printf(" : try again :") ;


    
    // [CONTINUE STATEMENT]

    for(int i = 1 ; i <= 10 ; i++ )
    {  
      if(i == 6) {
        continue ;
      }
      printf("%d \n" , i ) ;

    }
 // Prc. Ques.) Print all the odd numbers from 5 to 50. 
  int i ;
  for (i=1 ; i<= 500 ; i++) 
  {
    if(i % 2 != 0) {
      printf("%d \n" , i ) ;
    }
  }
  

  
   Prc Ques.) Print the factorial of a number n .

  int n ; 
  puts("enter the number") ;
  scanf("%d" , & n ) ;

 long double fact=1 ;
  for(long double i = 1 ; i<=n ; i++)
  {
    fact = fact * i;

  }
  printf("factorial of no. is : \n %Lf" , fact ) ;
  */
 
}