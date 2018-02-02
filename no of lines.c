#include<stdio.h>
#include<string.h>
void main()
{
  char c[100];
  int count=0,i;
  printf("enter the string");
  scanf("%[^\n]c", &c);
  for(i=0;c[i]!='\0';i++)
  {
    if(c[i]==' ')
    {
    count++;
    }
  }
  printf("%d",count);
}
