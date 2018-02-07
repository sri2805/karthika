#include<stdio.h>
#incude<conio.h>
int main()
{
int m,n;char a[20],c[20];
printf("enter the value of a and c");
scanf("%s %s",&a,&c);
m=strlen(a);
n=strlen(c);
if(m>=n)
{
printf("%s",a);
}
else
{
printf("%s",c);
}
return 0;
}
