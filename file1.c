//file1.c
#include "file.h"    //��������� �������

int salary = 3500000;      //��������
int main()
{
	myName();
	myAge();
	mySal();

	printf("�Ǽ��ɾ�: %d \n", salary);

	return 0;
}

void myName()
{
	printf("����: ȫ�浿 \n");
}

void myAge()
{
	printf("����: %d \n", AGE);
}