#include <stdio.h>
#define M sizeof(unsigned int)*8

int trans(unsigned n,int d,char s[])
{
	static char digits[]="0123456789ABCDEF";
	char buf[M+1];
	int j,i=M;
	if(d<2||d>16)
	{
		s[0]='\0';
		return 0;
	}
	buf[i]='\0';
	do
	{
		buf[--i]=digits[n%d];
		n/=d;
	}while(n);
	
	for(j=0;(s[j]=buf[i])!='\0';j++,i++);
	
	return j;
}

int main(void)
{
	unsigned int num=253;
	int scale[]={2,8,10,16,1};
	char str[33];
	int i;
	for(i=0;i<sizeof(scale)/sizeof(scale[0]);i++)
	{
		if(trans(num,scale[i],str))
			printf("%5d=%s(%d)\n",num,str,scale[i]);
		else
			printf("%5d=>(%d) ERROR!\n",num,scale[i]);
		}
		printf("\nPress any key to QUIT...\n");
		getch();	
}
