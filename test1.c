//test1.c
#include <stdio.h>
#define PI 3.14159


//Ű����κ��� �������� �Է¹޾�,
//���� ����(radius), ���� �ѷ�(cir)�� ���Ͽ� 
//����Ͻÿ�(main())


/*
<������>
������ ? 7 
���� ����: ??? 
���� �ѷ�: ??? 
*/


//3.�Լ������
double Area(int radius);
double Cir(int radius);


int main()
{
	//1.�޸� �Ҵ�(��������)
	int radius;
	double area, cir;


	//2.������ �Է�
	printf("������ ? ");
	scanf("%d", &radius);     //7
	

	//3.ó��(����, �ѷ� ���)
//2.�Լ�ȣ���
	area = Area(radius);
	cir = Cir(radius);


	//4.���
	printf("���� ����: %lf \n", area);       //���μ�
	printf("���� �ѷ�: %lf \n", cir);		//���μ�

	return 0;
}

//1.�Լ����Ǻ�
double Area(int radius)       //���μ�
{
	return radius* radius * PI;      //������ڸ��� �θ����� �ѱ�
}


double Cir(int radius)      //���μ�
{
	return radius * 2 * PI;		//������ڸ��� �θ����� �ѱ�
}