
#include<stdio.h>
int main()
{
int num,count=0;
printf("Enter the number");
scanf("%d",&num);
while(num!=0)
{
num/=10;
++count;
}
printf("\n%d",count);
return 0;
}
