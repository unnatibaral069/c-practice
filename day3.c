#include<stdio.h>
int main()
{
int n,x,i,rev=0;
printf("\n enter a no to check");
scanf("%d",&n);
i=x;
while(i>0)
{
rev=(rev*10)+i%10;
i=i/10;
}
if(rev==x)
{
printf("%d is a pallindrome");
}
else {
printf("%d is not a pallindrome");
}
return 0;
}