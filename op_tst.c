#include<stdio.h>

void printAddress(int *n) ;

// main function 
int main () {
    int *n = 4 ;
    printAddress(*n) ;
    printf("address of n is : %u \n" , *n) ;


}

void printAddress (int *n ) 
{
    printf("address of n is : %u \n" , *n) ;
}