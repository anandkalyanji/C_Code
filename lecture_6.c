// Pointers in Funtion Call
#include<stdio.h>


void square(int n) ;
void _square(int* n ) ;

int main  () {
  
    int number ;
    scanf("%d" , & number ) ;
    square(number) ;
    printf("number is = %d \n" , number ) ;


}

void square (int n) // Call By Value
{  

  n = n * n ;
  printf("square = %d \n" , n ) ;

}
#include<stdio.h>

void square(int n ) ;


// Pointers in Function Call 
int main () {

    int num = 4 ;
    square(4) ;
    printf("number : %d" , num ) ;

}



// Call by value 

void square(int n ) {

    n = n * n ;
    printf("square = %d \n", n ) ;

}
//// Pointer to Pointer 
// int main ()
//  {    // Prc. Ques.) Print the value of 'i' from its pointer  to pointer.
//     int i = 5 ; 
//     int *ptr = &i ;
//     int **pptr = &ptr ;

//     printf("%d" , **pptr  ) ;

// }   






// Pointers
//    int age = 22 ;
// //    int *ptr  = &age ;
   
// //    // value 

// //    printf("%d \n" , age ) ; 
// //    printf("%d \n" , *ptr) ;
// //    printf("%d \n" , *(&age) ) ;




// [eg]
// #include<stdio.h>

// int main ()
// {
//     int *ptr ;
//     int x ;

//     ptr = &x ;
//     *ptr = 0 ; // x = 0

//     printf("x = %d \n" , x ) ; // 0
//     printf("*ptr = %d \n" , *ptr  ) ; // 0

//     *ptr += 5 ; // *ptr = *ptr + 5 ;
//     printf("x = %d \n" , x) ;  // 5 
//     printf("*ptr = %d \n" , *ptr ) ; // 5

//     (*ptr)++ ; // use of increment operator [*ptr = *ptr + 1]
//     printf("x = %d\n" , x ) ; // 6
//     printf("*ptr = %d" , *ptr ) ; // 6

   
// }


