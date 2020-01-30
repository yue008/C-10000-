/*在已知两个从小到大有序的数表中寻找出现的第一个元素的指针*/
#include <stdio.h>
int *search2(int *pa,int *pb,int an,int bn)
{
	int *ca,*cb;
	
	ca=pa;cb=pb;
	while (ca<pa+an&&cb<pb+bn)
	{
		if(*ca<*cb)
			ca++;
		else if(*ca>*cb)
			cb++;
		else
			return ca;
	}
	return 0;
 } 
 
 int main()
 {
 	int *vp,i;
 	int a[ ]={1,3,5,7,9,11,13,15,17,19};
 	int b[ ]={2,4,6,8,10,12,14,16,17,19};
 	puts("The elements of arry a is:");
 	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
 		printf("%d\n",a[i]);
 	puts("\nThe elements of arry b is:");
 	for(i=0;i<sizeof(b)/sizeof(b[0]);i++)
 		printf("%d\n",b[i]);
 	vp=search2(a,b,sizeof(a)/sizeof(a[0]),sizeof(b)/sizeof(b[0]));
 	printf("%d\n%d",a,b);//a为数组指针地址 
 	if(vp) printf("\n The first same number in both arrys is %d\n",*vp);
 	else printf("Not found\n");
 	puts("\nPress any key to QUIT...");
 	getch();
 		
 }
