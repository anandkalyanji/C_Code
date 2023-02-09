#include<stdio.h>

// pointer arithmetic [arrays]

int main () {
    // char  star = '*' ;
    // char *ptr = star ;

    // printf("memory address : %u \n" , ptr ) ;


    // (ptr)-- ; // decrement address location slot no.
    // printf("memory address : %u \n" , ptr ) ;
   
    // (ptr)++ ; // increment address location slot no.
    // printf("memory address : %u \n" , ptr ) ;

    int age = 22 ;
    int _age = 23 ;
    int *ptr = &age ;
    int *_ptr = &_age ;

    printf("%u \n %u \ndifference = %u \n" , ptr , _ptr , ptr-_ptr) ;

    _ptr = &age ;
    printf("comparsion = %u \n" , ptr == _ptr ) ;
    
}