#include<stdio.h>
int main(void)
{
int x=1,y=1,i,n,z;
printf("\n enter the range to print the fibonacci numbers\n");
scanf("%d",&n);
printf("%d",x);
printf("\t%d",y);
for(i=0;i<=n-2;i++)
{
z=x+y;
printf("\t%d",z);
x=y;
y=z;
}
return 0;
}
