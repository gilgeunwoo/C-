#include <stdio.h>
#include <string.h>
//struct Person
//{
//	double height;
//	double weignt;
//	char name[10];
//	short grade;
//};
//
//int main() 
//{
//	struct Person person;
//
//	person.height = 174.2;
//	person.weignt = 67.8;
//	person.grade = 1;
//	strcpy(person.name, "ȫ�浿");
//
//	printf("Ű : %.1lf\n������ : %.1lf\n�̸� : %s\n�г� : %d\n", person.height, person.weignt, person.name, person.grade);
//	
//}

//typedef struct employee
//{
//	char name[101];
//	char ID[15];
//	int payInfo;
//} Emp;
//
//int main() 
//{
//	Emp emp;
//
//	strcpy(emp.name, "������");
//	strcpy(emp.ID, "060911-3000000");
//	emp.payInfo = 1000;
//
//	printf("������ �̸� : %s\n�ֹε�Ϲ�ȣ : %s\n�޿����� : %d����\n", emp.name, emp.ID, emp.payInfo);
//
//	return 0;
//}

//#include <math.h> 
//
//typedef struct Coordinate {
//	
//	double x;
//	double y;
//} Coo;
//
//int main() 
//{
//	double ans;
//	Coo coo1, coo2;
//	scanf("%lf %lf %lf %lf", &coo1.x, &coo1.y, &coo2.x, &coo2.y);
//	
//	ans = sqrt((coo1.x - coo2.x) * (coo1.x - coo2.x) + (coo1.y - coo2.y) * (coo1.y - coo2.y));
//
//	printf("%lf", ans);
//
//	return 0;
//}

//
//#include <stdlib.h>
//#define SIZE 3
//
//typedef struct Student {
//	int number;
//	char name[20];
//	double grade;
//} Student;
//
//int main()
//{
//	Student st[SIZE];
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("�й� �Է� : ");
//		scanf("%d", &st[i].number);
//		printf("�̸� �Է� : ");
//		scanf("%s", &st[i].name);
//		printf("���� �Է� : ");
//		scanf("%lf", &st[i].grade);
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("�й� : %d, �̸� : %s, ���� : %.1lf\n", st[i].number, st[i].name, st[i].grade);
//	}
//
//	return 0;
//}

//struct point {
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct point po[3];
//
//	for (int i = 0; i < 3; i++) {
//		printf("x��ǥ �Է� : ");
//		scanf("%d", &po[i].x);
//		printf("y��ǥ �Է� : ");
//		scanf("%d", &po[i].y);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (po[i].x > 0 && po[i].y > 0)
//			printf("1��и�\n");
//		else if (po[i].x < 0 && po[i].y>0)
//			printf("2��и�\n");
//		else if (po[i].x < 0 && po[i].y < 0)
//			printf("3��и�\n");
//		else
//			printf("4��и�\n");
//	}
//}

#include <stdio.h>

int main()
{
	printf("ȫ���� �ٺ�");
	return 0;

}