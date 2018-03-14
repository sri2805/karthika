#include<stdio.h>
#include<conio.h>
int main(void)
{
char str[20];
int m,i,flag;
printf("enter the string:");
scanf("%s",str);
m=strlen(str);
for(i=0;i<m;i++)
{
if((str[i]>='a'&&str[i]<='z')||(str[i]>='a'&&str[i]<='z'))
{
flag=1;
}
else
if(str[i]>='0'&&str[i]<='9')
{
flag=2;
}
else
{
flag=0;
}
}
if(flag==1&&flag==2)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
