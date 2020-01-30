#include <stdio.h>

int circle(int n,int d)
{
	int s=0,m=n;
	while(m)
	{
		s=s*d+m%d;
		m/=d;
	}
	return s==n;
}
/*mainh函数用于测试circle函数*/
int num[]={22,27,851};
int scale[]={2,10,16};
int main(void)
{
	int i,j;
	for(i=0;i<sizeof(num)/sizeof(num[0]);i++)
		for(j=0;j<sizeof(scale)/sizeof(scale[0]);j++)
			if(circle(num[i],scale[j]))
				printf("%d -> (%d) is a Circle NUmber!\n",num[i],scale[j]);
			else
				printf("%d -> (%d) is not Circle Number\n",num[i],scale[j]);
	printf("|nPress any tkey to QUIT...");
	getch();
}
