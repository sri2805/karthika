#include<stdio.h>
int main()
{
char str[400];
int i,count;
printf("\n Enter the string");
scanf("%a",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='7')
{
count++;
}
}
printf("\n The numeric value is %d",count);
}
return 0;
}
