#include<stdio.h>

  
 int main()
{
  int marks_avg [6] ;

  printf("enter marks : ist sub \n") ;
  scanf("%d" , & marks_avg[0]) ;

    printf("enter marks : 2nd sub \n") ;
  scanf("%d" , & marks_avg[1]) ;

    printf("enter marks : 3rd sub \n") ;
  scanf("%d" , & marks_avg[2]) ;

    printf("enter marks : 4th sub \n") ;
  scanf("%d" , & marks_avg[3]) ;

    printf("enter marks : 5th sub \n") ;
  scanf("%d" , & marks_avg[4]) ;
    
    printf("enter marks : 6th sub \n") ;
  scanf("%d" , & marks_avg[5]) ;


 int avg ;
 avg = marks_avg[0] + marks_avg[1] + marks_avg[2] + marks_avg[3] + marks_avg[4] + marks_avg[5] / 6 ;


 printf("the average is : %d \n" , avg) ;





}