#include <stdio.h>
main()
{
	/*sizeof()是保留字，它的作用是QQ某变量类型的字节数*/
	/* 括号中可以是类型保留字或变量*/
	/*int类型在不同的机器，不同的编译器中的字节数不一样*/
	/*一般来说在TC2.0编译器中字节数为2，在VC编译器中字节数为4*/
	printf("The bytes of the variables are:\n");
	printf("int:%d bytes\n",sizeof(int));
	/*char型的字节数为1*/
	printf("char:%d bytes\n",sizeof(char));
	/*short型的字节数为2*/
	printf("short:%d bytes\n",sizeof(short));
	/* long型的字节数为4*/
	printf("long:%d bytes\n",sizeof(long));
	/* float型的字节数为4 */
	printf("flaoat:%d bytes\n",sizeof(float));
	/* double型的字节数为8*/
	printf("double:%d bytes\n",sizeof(double));
	/* long double型的字节数为8或10或12*/
	printf("long double:%d bytes\n",sizeof(long double));
	return 0;
}
