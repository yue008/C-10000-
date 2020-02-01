#include <stdio.h>
#define ERR 5
#define OK 6

int status;
double result,sig,scale;
int sign(int c)
{
	if(c=='-')
		sig=-sig;
}
int integer(int c)
{
	result=result*10.0+c-'0';
}
int decimal(int c)
{
	result+=(c-'0')*scale;
	scale/=10.0;
}
/*״̬��*/
int statbl[ ][4]={{   1,2,3,ERR},
				{ERR,2,3,ERR},
			    {OK,2,4,OK},
			    {ERR,4,ERR,ERR},
			    {OK,4,OK,OK}};
/*ת��������*/
int(*funtbl[ ][4])( )={{sign,integer,NULL,NULL},
	                {NULL,integer,NULL,NULL},
	                {NULL,integer,NULL,NULL},		
	                {NULL,decimal,NULL,NULL},
                                    {NULL,decimal,NULL,NULL}};

int readreal(double *dp)
{
	int c,ckind;
	sig=1.0;
	result=0.0;
	scale=0.1;
	
	while((c=getchar())==' '||c=='\n'||c=='\t');
	status=0;
	for(;;)
	{
		/*���൱ǰ�ַ�*/
		if(c=='+'||c=='-') ckind=0;/*���ķ����ַ�*/
		else if(c>='0'&&c<='9') ckind=1;/*���ַ�*/
		else if(c=='.') ckind=2;/*С����*/
		else ckind=3;/*�����ַ�*/
		
		if(funtbl[status][ckind])/*����ת������*/
			(*funtbl[status][ckind])(c);/*ִ����Ӧ�ĺ���*/
		status=statbl[status][ckind];/*�����µ�״̬*/
		if(status==ERR||status==OK)break;/*�����������ɹ�*/
		c=getchar(); 
	}
	ungetc(c,stdin);/*�黹���Ľ�����*/
	if(status==OK)
	{
		
		*dp=result *sig;/*��������ָ�븳����Ӧ����*/
		return 1;
	}
	return -1;/*������*/
}
int main()
{
	double x;
	printf("\n Please input real numbers(use nonreal char to end input):\n");
	while(readreal(&x)==1)
		printf("The real number you input is:%f\n",x);
	printf("\nYou have inputted nonreal char.\n Press any key to quit...");
	getch();
 } 
