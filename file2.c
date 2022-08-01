//file2.c

#include "file.h"   //사용자정의 헤더파일

extern int salary;      //exturen은 메모리를 할당 받지 않고 컴파일러에게 자료형을 알린다.

void mySal()
{
	//printf("수당: %d \n", SUDANG);
	salary += SUDANG;
	
}