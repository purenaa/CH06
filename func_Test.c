//func_Test.c
#include <stdio.h>

//�Լ� : ����� ó���ϴ� ������ �ڵ���� ����
//�Լ���� : 1:�Լ�����, 2:�Լ�ȣ��, 3:�Լ�����(�ɼ�)    ������� ��!!! ���


void funcA();   //3:�Լ������
//�Լ������� �����Ϸ����� �Լ��� ����(����)�� �˸���. (void or int)
//�̸� �����ϸ� �����Ϸ��� ��� ���ڸ� int �� �����Ѵ�.
void funcB(int salary);
int funcD();
float funcE(int salTot, float rate);


int main()
{
	int salary = 3500000;  //��������(�ڽ��� ����� �Լ������� ���)
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA();	       //2:�Լ�ȣ���(���μ�)       //�θ��Լ�
	funcB(salary);     //���μ� = ��������	
	
	sudang = funcD();
	printf("main() ���� : %d \n", sudang);

	tax = funcE(salary+sudang, 0.03);
	printf("�Ǽ��ɾ� : %f \n", (salary + sudang)-tax);

	printf("main() end. \n");

	return 0;
}


float funcE(int salTot, float rate)
{
	//printf("funcE(): %d, %f \n", salTot, rate);
	//printf("funcE(): ���� : %f \n", salTot*rate);

	return salTot * rate;
}


// 1:�Լ����Ǻ�
void funcA()    //�Լ����    //�ڽ��Լ�
{				//�Լ��ٵ�
	printf("funcA() start. \n");
	return;
	printf("funcA() end. \n");
}


//���μ��� ���μ��� ������ �ڷ����� ���ƾ� �Ѵ�
void funcB(int salary)    //���μ�    //return value�� ������ void �����
{
	printf("funcB() salary: %d \n", salary);
}


int funcD()        //����Ʈ�� int
{
	int over_time = 15;

	//printf("funcD() ���� : %d \n", over_time * 37000);
	return over_time * 37000;
}