#include "stdio.h"
#include "string.h"
void function(char *s)
{
	char *p=s,*q=s;
	char *L=0;
	int len=0;
	while(*(p+1)!=0)
	{
		p++;
		len++;
	}
	L=p;
	while(*q==*L)
	{
		q++;
		L--;
		len=len-2;
		if(len<=0)
		{
			printf("shihuiwenshu!");
			break;
		}
	}
	if(len>0)
	printf("bushi\n");
}
int main()
{
	char *s;
	gets(s);
	function(s);
	return 0;
}
