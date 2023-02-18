#include<stdio.h>
#include<conio.h>

struct project_911
{
    int issue_id ;
    char name ;
};

int main () {
    struct project_911 Defence ;

    printf("Enter the issue id :") ;
    scanf("%d" , & Defence.issue_id) ;
    printf("The issue_id is : %d \n" , Defence.issue_id) ;

    printf("Enter the name :") ;
    scanf("%c" , & Defence.name) ;
    printf("\n The name is %c" , Defence.name) ;




    getch() ;

}

 