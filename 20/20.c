#include <stdio.h>
#define N 20
#define DELTA 2

int bestlen;
int bestsele[N];
int sele[N];
int n;
int orderlen[N];
int total;
int main(void)
{
	int i;
	printf("\n Please enter total length of the steel:\n");
	scanf("%d",&total);
	printf("\nPlease enter number of order:\n");
	scanf("%d",&n);
	printf("\nPlease enter the orders:\n");
	for(i=0;i<n;i++)
		scanf("%d",&orderlen[i]);
	bestlen=0;
	for(i=0;i<n;i++)
		sele[i]=bestsele[i]=0;
	try();
	for(i=0;i<n;i++)
		if(bestsele[i])
			printf("order %d length = %d\n",i+1,orderlen[i]);
	printf("\nPress any key to QUIT...");
	getch();
}

try()
{
	int i,len;
	for(len=i=0;i<n;i++)
		if(sele[i])
			len+=orderlen[i]+DELTA;
	if(len-DELTA<=total)
	{
		if(bestlen<len)
		{
			bestlen=len;
			for(i=0;i<n;i++)
				bestsele[i]=sele[i];
		}
		for(i=0;i<n;i++)
			if(!sele[i])
			{
				sele[i]=1;
				try();
				sele[i]=0;
			}
		}	
}
