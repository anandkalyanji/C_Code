#include<stdio.h>



float ConvertTemp (float celsius) ;


int main () {

 printf("enter the temprature in celsius : ")   ;
 float g ;
 scanf("%f" , & g) ;



printf("convereted temprature to fahrnheit : %f" , ConvertTemp(g)) ;


}
float ConvertTemp (float celsius) {
    float far = celsius * (9.0/5.0) + 32 ;
    return far;
}