// C implementation to find the sumof series 1 + x^2 + x^3 + ....+ x^n 
#include <math.h>
#include <stdio.h>// Function to print the sum// of the series
double sum(int x, int n)
{
double i, total = 1.0, multi = x;

// First Term of series

printf("1 ");

// Loop to find the N

// terms of the series

for (i = 1; i < n; i++) {

total = total + multi;

printf("%.1f ", multi);

multi = multi * x;

}

printf("\n");

return total; }
// Driver Code
int main()
{
int x = 2;

int n = 5;

printf("%.2f", sum(x, n));

return 0;
}
