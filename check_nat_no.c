// WRITE A PROGRAM TO CHECK IF THE GIVEN NO. IS A NATURAL NUMBER ;

#include<stdio.h>
#include<conio.h>

int main ()
{
    int a ;
    puts("enter the number to check if it natural no. or not") ;
    scanf("%d" , &a) ;
    if (a>=1)
    {
      printf("the entered no. is natural") ;
    }
    else {
        printf("this not an natural no.") ;
    }
  getche();
}