#include <stdio.h>
#define MAX 20

int search(int *apt,/*已知数表的首元指针*/
			int n,/*数表中元素个数*/
			int key)/*要寻找的值*/
{
	int *p;
	for(p=apt;p<apt+n;p++)
		if(*p==key)
			return p-apt;/*返回找到元素的下标*/
	return -1; 
 } 
 
 int *find(int *apt,/*已知数表的首元指针*/
 			int n,/*数表中元素个数*/
			 int key)/*要寻找的值*/
{
	int *p;
	for(p=apt;p<apt+n;p++)
		if(*p==key)
			return p;/*返回找到元素的指针*/
	return NULL;
 } 
 
 int a[]={90,80,70,60,50,40,30,20,10,9,8,7,6,5,42,40,50,1,2,3};
 int main(void)
 {
 	int i,key;
 	printf("The elments of arry a is:\n");
 	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
		printf("%d\n",a[i]);
	printf("\nThe address of a[0] is:%d.\n",&a[0]);
	puts("\nPlease input the key number you want to search:");
	scanf("%d",&key);
	i=search(a,sizeof(a)/sizeof(a[0]),key);
	printf("\nThe label number of the key number %d in the arry is:%d.",key,i);
	printf("\n The point value of the key number %d in the arry is:%d",key,find(a,sizeof(a)/sizeof(a[0]),key));
	
	puts("\n\nPress any key to QUIT...");
	getch();
 }
