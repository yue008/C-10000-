#include <stdio.h>
#include <conio.h>
#define MAXN 20
main()
{
	int min,
		max;
	int row,col,n;
	int a[MAXN][MAXN];
	printf("Please input the order of the matrix:\n");
	scanf("%d",&n);
	printf("Please input the elements of the matrix,\n from a[0][0] to a[%d][%d]:\n",n-1,n-1);
	for (row=0;row<n;row++)
		for(col=0;col<n;col++)
			scanf("%d",&a[row][col]);
	min=a[0][0];
	max=a[0][0];
	for(row=0;row<n;row++)
		for(col=0;col<n;col++)/*从row行选出最大数*/ 
			if(max<a[row][col])
				max=a[row][col];		
	printf("The maximum of maxinum number is %d\n",max);
	for(row=0;row<n;row++)
		for(col=0;col<n;col++) /*从row行选出最小数*/
			if(min>a[row][col])
				min=a[row][col]; 
	 printf("The mininum of mininum numbers is %d\n",min);
	 printf("\nPress any key to quit...");
	 getch();
	
}
