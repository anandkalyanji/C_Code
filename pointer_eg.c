#include<stdio.h>
#include<conio.h>


void doWork(int a , int b , int *sum , int *prod , int *avg ) ;

int main () {
    int a , b ;
    a = 3 , b = 5 ;
    int sum , prod , avg ;
    doWork(a , b , &sum , &prod , &avg) ;



    printf("sum = %d , prod = %d , avg = %d" , sum , prod , avg   ) ;

}

void doWork (int a , int b , int *sum , int *prod , int *avg) {
    *sum = a + b ;
    *prod = a*b ;
    *avg = (a+b)/2 ;
}