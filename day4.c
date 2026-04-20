#include<stdio.h>
int main()
{
int n,i,fact;
printf("enter a no to check:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of %d is %d",n,fact);
return 0;