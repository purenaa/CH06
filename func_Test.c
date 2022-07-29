//func_Test.c
#include <stdio.h>

//함수 : 어떤일을 처리하는 논리적인 코드들의 집합
//함수사용 : 1:함수정의, 2:함수호출, 3:함수선언(옵션)    순서대로 꼭!!! 사용


void funcA();   //3:함수선언부
//함수선언은 컴파일러에게 함수의 원형(형식)을 알린다. (void or int)
//이를 생략하면 컴파일러는 모든 인자를 int 로 간주한다.
void funcB(int salary);
int funcD();
float funcE(int salTot, float rate);


int main()
{
	int salary = 3500000;  //지역변수(자신이 선언된 함수에서만 사용)
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA();	       //2:함수호출부(무인수)       //부모함수
	funcB(salary);     //실인수 = 전달인자	
	
	sudang = funcD();
	printf("main() 수당 : %d \n", sudang);

	tax = funcE(salary+sudang, 0.03);
	printf("실수령액 : %f \n", (salary + sudang)-tax);

	printf("main() end. \n");

	return 0;
}


float funcE(int salTot, float rate)
{
	//printf("funcE(): %d, %f \n", salTot, rate);
	//printf("funcE(): 세금 : %f \n", salTot*rate);

	return salTot * rate;
}


// 1:함수정의부
void funcA()    //함수헤더    //자식함수
{				//함수바디
	printf("funcA() start. \n");
	return;
	printf("funcA() end. \n");
}


//실인수와 가인수는 개수와 자료형이 같아야 한다
void funcB(int salary)    //가인수    //return value가 없으면 void 써야함
{
	printf("funcB() salary: %d \n", salary);
}


int funcD()        //디폴트가 int
{
	int over_time = 15;

	//printf("funcD() 수당 : %d \n", over_time * 37000);
	return over_time * 37000;
}