#include <stdio.h>

int main(void)
{
	int x,y,z;
	int *xp=&x,
		*yp=&y,
		*zp=&z;
	int t;
	printf("\nPlease input x,y,z:\n");
	scanf("%d%d%d",xp,yp,zp);
	if(*xp>*yp)
	{
		t=*xp;
		*xp=*yp;
		*yp=t;
	}	
	if(*xp>*zp)
	{
		t=*xp;
		*xp=*zp;
		*zp=t; 
	}
	if(*yp>*zp)
	{
		t=*yp;
		*yp=*zp;
		*zp=t;
	}
	printf("x=%d\ty=%d\tz=%d\n",x,y,z);
	printf("\nPress any key to QUIT...");
	getch();
}
