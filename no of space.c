#include<stdio.h>
void main()
{
char b[40];
int i,count=0;
printf("enter a character");
scanf("%[^\n]b",b);
for(i=0;b[i]!='\0';++i)
{
if(b[i]==' ')
{
++count;
}
}
printf("%d",count);
}
