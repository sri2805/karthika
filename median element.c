#include<stdio.h>
void main()
{
int c,b[10],i,sum=0;
printf("Enter how many numbers \n");
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&b[i]);
sum=sum+b[i];
}
int median=sum/c;
printf("median is :%d\n",median);
}
