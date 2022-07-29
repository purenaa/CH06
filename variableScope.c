//variableScope.c
#include <stdio.h>

int salary = 3500000;  //전역변수

int main()
{
	int age = 23;      //지역변수

	printf("main() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	funcA(age);    //실인수
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
	int sum1 = 1;          //지역변수   //stack은 계속 초기화
	static int sum2 = 1;   //정적변수(static)   //정적변수는 한번만 초기화하기 때문에 값을 보존할 수 있다.

	printf("sum1: %d, sum2: %d \n", sum1++, sum2++);
}

funcA(int age)    //가인수    
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