#include <stdio.h>
#include<conio.h>


long int factorial( long int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
long int main()
{   

    printf("Enter the no. whose factorial do you want") ;
    long int num ;
    scanf("%ld" , & num) ;

    printf("Factorial of %ld is %ld", num, factorial(num));
    return 0;


    getche () ;
    
}