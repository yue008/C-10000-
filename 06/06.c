#include <stdio.h>
main()
{
	/*sizeof()�Ǳ����֣�����������QQĳ�������͵��ֽ���*/
	/* �����п��������ͱ����ֻ����*/
	/*int�����ڲ�ͬ�Ļ�������ͬ�ı������е��ֽ�����һ��*/
	/*һ����˵��TC2.0���������ֽ���Ϊ2����VC���������ֽ���Ϊ4*/
	printf("The bytes of the variables are:\n");
	printf("int:%d bytes\n",sizeof(int));
	/*char�͵��ֽ���Ϊ1*/
	printf("char:%d bytes\n",sizeof(char));
	/*short�͵��ֽ���Ϊ2*/
	printf("short:%d bytes\n",sizeof(short));
	/* long�͵��ֽ���Ϊ4*/
	printf("long:%d bytes\n",sizeof(long));
	/* float�͵��ֽ���Ϊ4 */
	printf("flaoat:%d bytes\n",sizeof(float));
	/* double�͵��ֽ���Ϊ8*/
	printf("double:%d bytes\n",sizeof(double));
	/* long double�͵��ֽ���Ϊ8��10��12*/
	printf("long double:%d bytes\n",sizeof(long double));
	return 0;
}
