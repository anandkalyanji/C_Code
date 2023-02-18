#include<stdio.h>
#include<conio.h>

struct Student
{
    int roll_no ;
    int fee ;
};

int main  () {

    struct Student ram  ;
    printf("enter the roll no : ") ;
    scanf("%d \n" , &ram.roll_no) ;
    printf("enter the fee : ") ;
    scanf("%d " , &ram.fee) ;
    printf("Your Roll No. is : %d \n Your Fee is %d" , ram.roll_no , ram.fee) ;
 
 
}


