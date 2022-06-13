#include <stdio.h>
//
//int main() {
//	int a, b = 1;
//	scanf("%d", &a);
//	 
//	while (b<=a)
//	{
//		printf("%d", b);
//		b++;
//	}
//	return 0;
//}

int main() {
	int a;
	scanf("%d", &a);
	b = a;
	while (1)
	{
		if (a % b == 0)
			printf("%d", b);
		b--;
	}
}