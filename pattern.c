#include<stdio.h>
#include<conio.h>

int main ()
{
    int n , i , j ;
    printf("Enter the number of lines to be printed in output") ;
    scanf("%d" , &n ) ;

    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("*") ;
        }
        printf("\n") ;
    }
    getche () ;
}


