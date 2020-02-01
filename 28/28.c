//字符排版函数，将字符行内单字之间的空白字符平均分配插入到单字之间
#include <stdio.h>
#include <string.h>
#define N 80

edit(char *s)
{
	int i,sp,w,inw,v,r;
	char buf[N],*str;
	for(inw=sp=w=i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			sp++;
			inw=0;
		}
		else if(!inw)
		{
			w++;
			inw=1;
		}
		
	}
	if(w<=1)
		return;
	v=sp/(w-1);
	r=sp%(w-1);
	strcpy(buf,s);
	for(str=buf;;)
	{
		while(*str==' ')str++;
		for(;*str&&*str!=' ';)
			*s++=*str++;
		if(--w==0)
			return;
		for(i=0;i<v;i++)
			*s++=' ';
		if(r)
		{
			*s++=' ';
			r--;
		}
	}
 } 
char buff[N];
int main()
{
	
	puts("This is a typeset program!\nPlease input a character line:\n");
	gets(buff);
	edit(buff);
	printf("\nThe character line after typeset is:\n\n%s\n",buff);
	puts("\nPress any key to QUIT...");
	getch();
}
