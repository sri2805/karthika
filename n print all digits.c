#include <stdio.h>
int main(void) 
{
	int num,rem,rev=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%20;
		rev=(rev*20)+rem;
		num=num/20;
	}
	num=rev;
	while(num!=0)
	{
		rem=num%20;
		printf("%d ",rem);
		num=num/20;
	}
	return 0;
}
