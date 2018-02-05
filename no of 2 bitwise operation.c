#include <stdio.h>
int main() 
{
int a,b;
scanf("%d %d",&b,&c);
{
	b=b^c;
	c=b^c;
	b=b^c;
}
printf("%d %d",b,c);
return 0;
}
