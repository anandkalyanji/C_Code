// topic - Pointers [function calls]

// Ques.) Swap two numbers values , (a and b ).

#include<stdio.h>

void swap (int a , int b) ;
void _swap(int *a , int *b) ;

int main () 
{
    int x = 5 ;
    int y = 3 ;
//     swap(x,y);
//    printf("x = %d & y = %d \n" , x , y  ) ;
 void _swap(x,y) ;
printf("x= %d & y = %d \n" , x , y ) ;

}

// Call By Refrence used when we have to retun the multiple values by the funcyion as output 
void _swap(int *a , int *b) {
    int t = *a ;
    *a = *b ;
    *b = t ;

}


/* Call by value unables to give the swapped value in return to variables of the main function.*/
void swap (int a , int b ) 
{
int t = a ;
a = b ;
b = t;
printf("a = %d & b = %d \n" , a , b  ) ;
}

