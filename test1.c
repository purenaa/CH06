//test1.c
#include <stdio.h>
#define PI 3.14159


//키보드로부터 반지름을 입력받아,
//원의 넓이(radius), 원의 둘레(cir)를 구하여 
//출력하시오(main())


/*
<실행결과>
반지름 ? 7 
원의 넓이: ??? 
원의 둘레: ??? 
*/


//3.함수선언부
double Area(int radius);
double Cir(int radius);


int main()
{
	//1.메모리 할당(변수선언)
	int radius;
	double area, cir;


	//2.데이터 입력
	printf("반지름 ? ");
	scanf("%d", &radius);     //7
	

	//3.처리(넓이, 둘레 계산)
//2.함수호출부
	area = Area(radius);
	cir = Cir(radius);


	//4.출력
	printf("원의 넓이: %lf \n", area);       //실인수
	printf("원의 둘레: %lf \n", cir);		//실인수

	return 0;
}

//1.함수정의부
double Area(int radius)       //가인수
{
	return radius* radius * PI;      //계산하자마자 부모한테 넘김
}


double Cir(int radius)      //가인수
{
	return radius * 2 * PI;		//계산하자마자 부모한테 넘김
}