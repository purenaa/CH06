//variableScope.c
#include <stdio.h>

int salary = 3500000;  //��������

int main()
{
	int age = 23;      //��������

	printf("main() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	funcA(age);    //���μ�
	printf("main() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);


	funcD();
	funcD();
	funcD();


	return 0;
}


funcD();
{
	int sum1 = 1;          //��������   //stack�� ��� �ʱ�ȭ
	static int sum2 = 1;   //��������(static)   //���������� �ѹ��� �ʱ�ȭ�ϱ� ������ ���� ������ �� �ִ�.

	printf("sum1: %d, sum2: %d \n", sum1++, sum2++);
}

funcA(int age)    //���μ�    
{
	printf("funcA() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 200000;
}

funcB()
{
	int age = 23;
	int salary = 1000;

	printf("funcB() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	age = 40;
	salary += 20000;
}