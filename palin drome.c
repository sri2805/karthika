#include<stdio.h>
void main()
{
int num,r,sum=0,temp;
printf("enter the number");
scanf("%d",num);
temp=num;
while(num)
{
r=num%10;
num=num/10;
sum=sum*10+r;
}
if(temp==num)
printf("palindrome,temp);
else
printf("not palindrome");
}
