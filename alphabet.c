#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch)
if(ch>='a'&&ch<'z')
{
printf("/n%c alphabet",ch);
}
else
{
printf("/n%c is not alphabet",ch);
}
return 0;
}
