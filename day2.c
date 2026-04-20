#include<stdio.h>
int main()
{
int n,i,x,sum=0;
printf("\nenter no to check:");
scanf("%d",&n);
x=n;
while(i>0)
{
sum=sum+(i%10)*(i%10)*(i%10);
i=i/10;
}
if(sum==x)
{
printf("no is armstrong");
}
else
{
printf("no is not armstrong");
}
return 0;
}