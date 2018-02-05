#include <stdio.h>
int main()
{
	int count=0,i;
	char b[50];
	gets(b);
	for(i=0;b[i];i++)
	{	
         if(ispunct(b[i]))
         {
         	count++;
         }

	}
	printf("%d",count);
	return 0;
}
