#include<stdio.h>
int main()
{
char b[50];
int i,count=0;
gets(b);
while(b[i]!='\0')
{
if(b[i]>='a'&&b[i]<='z'||b[i]>='0'&&b[i]<='9'||b[i]>='A'&&b[i]<='Z')
{
}
else
count++;
i++;
}
printf("%d",count);
return 0;
}
