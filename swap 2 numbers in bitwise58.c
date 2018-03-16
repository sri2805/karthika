#include<stdio.h>
int main(void)
{
int a,b,temp;
printf("\n enter the two numbers to swap:");
scanf("%d %d",&a,&b);
printf("\n before swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
temp=a;
a=b;
b=temp;
printf("\n after swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
return 0;
}
