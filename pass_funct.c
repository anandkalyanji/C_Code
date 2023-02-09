#include <stdio.h>
#include<conio.h>
int sort(int[],int);
int main()
{
   
int a[100],i,n,min ;

printf("Enter the number of elements :");
scanf("%d",&n);
printf("%d\n",n);
printf("Enter the element of array");
for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
for(i=1;i<=n;i++)
printf("\n%d",a[i]);
min=sort(a,n);
printf("\n Minimum number=%d",min);

    return 0;
}
int sort (int a[],int n)
{
   int min=a[1],i ;
for(i=1;i<=n;i++)
{
 if(min>a[i])
 min=a[i];
}
 return min ;

 getche();
} 