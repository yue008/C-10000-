#include <stdio.h>

main()
{
	float x,y,c;
	printf("please input x and y:\n");
	scanf("%f%f",&x,&y);
	c = x > y ? x:y;
	printf("Max of (%f,%f) is %f",x,y,c);
	
	return 0;
}
