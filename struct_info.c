#include<stdio.h>
#include<conio.h>

struct struct_info
{
    int name_id ;
    int call_id ;

};

void main () {
    struct struct_info Basic ;

    printf("enter the name_id : ") ;
    scanf("%d" , & Basic.name_id) ;

    printf("%d : this the name_id" , Basic.name_id) ;

    printf("\n enter the call_id : ") ;
    scanf("%d" , & Basic.call_id) ;

    printf("%d :  this the call_id" , Basic.call_id) ;
}
