#include <stdio.h>
#include <conio.h> 
#define N 50
main()
{
	int primes[N];
	int pc,m,k;
	
	printf("\n The first %d prime numbers are:\n",N);
	primes[0] = 2;
	pc=1;
	m=3;
	while(pc<N)
	{
	k=0;
	while(primes[k] * primes[k] <=m)
		if(m%primes[k] ==0)
		{/*m�Ǻ���*/
			m+=2;/*��mȡ��һ������*/ 
			k=1; /*������primes[0]=2ȥ����m������k��һ��ʼ*/ 
		}
		else
		k++;/*��������һ������ȥ����*/
	primes[pc++]=m;
	m+=2;/*��2�⣬����������������*/	
	}
	/*���primes[0]��primes[pc-1]*/
	for(k=0;k<pc;k++)
		printf("%d\n",primes[k]);
	printf("\n\nPress any key to Quit...");
	getch();
	
 } 
