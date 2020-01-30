#include <stdio.h>

rest(int a[],int n)
{
	int i,low,high,t;
	
	for(i=0,low=0,high=n-1;i<=high;)
	{
		if(a[i]>0)
		{
			t=a[i];
			a[i]=a[high];
			a[high]=t;
			high--;
		}
		else if(a[i]==0)
			i++;
		else
		{
			t=a[i];
			a[i]=a[low];
			a[low]=t;
			low++;
			i++;
		}
	}
}
int s[]={8,4,0,-1,6,0,-5};
int main(void)
{
	int i;
	printf("\nThe arry before rest is:\n");
	for(i=0;i<sizeof(s)/sizeof(s[0]);i++)
		printf("%4d",s[i]);
	rest(s,sizeof(s)/sizeof(s[0]));
	printf("\nThe arry after rest is:\n");
	for(i+0;i<sizeof(s)/sizeof(s[0]);i++)
		printf("%4d",s[i]);
	printf("\n Press any key to QUit...");
	getch();
}
