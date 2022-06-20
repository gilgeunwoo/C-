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
//	strcpy(person.name, "홍길동");
//
//	printf("키 : %.1lf\n몸무게 : %.1lf\n이름 : %s\n학년 : %d\n", person.height, person.weignt, person.name, person.grade);
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
//	strcpy(emp.name, "정승훈");
//	strcpy(emp.ID, "060911-3000000");
//	emp.payInfo = 1000;
//
//	printf("종업원 이름 : %s\n주민등록번호 : %s\n급여정보 : %d만원\n", emp.name, emp.ID, emp.payInfo);
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
//		printf("학번 입력 : ");
//		scanf("%d", &st[i].number);
//		printf("이름 입력 : ");
//		scanf("%s", &st[i].name);
//		printf("학점 입력 : ");
//		scanf("%lf", &st[i].grade);
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", st[i].number, st[i].name, st[i].grade);
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
//		printf("x좌표 입력 : ");
//		scanf("%d", &po[i].x);
//		printf("y좌표 입력 : ");
//		scanf("%d", &po[i].y);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (po[i].x > 0 && po[i].y > 0)
//			printf("1사분면\n");
//		else if (po[i].x < 0 && po[i].y>0)
//			printf("2사분면\n");
//		else if (po[i].x < 0 && po[i].y < 0)
//			printf("3사분면\n");
//		else
//			printf("4사분면\n");
//	}
//}

#include <stdio.h>

int main()
{
	printf("홍승재 바보");
	return 0;

}