#include<stdio.h>
void main()
{
int a[10],i,j,c;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]<a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf("%d",a[0]);
}
