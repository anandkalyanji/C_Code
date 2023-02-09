#include <stdio.h>
#include <time.h>

int main() {
clock_t start, end;

start = clock();

long double i  ;
    for(i=1;i<=1999;i++)
    {
        printf("%Lf",i);
        printf("\n");
        
    }



end = clock();

double duration = ((double)end - start)/CLOCKS_PER_SEC;

printf("Time taken to execute in seconds : %f", duration);

}