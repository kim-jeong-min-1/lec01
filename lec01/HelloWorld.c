#ifdef _MSC_VER
   #define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
// radius * radius * 3.14
int main(int argc, char* argv[]) {

	double PI = 3.14;
	int radius;

	printf("�������� �Է����ּ���");
	scanf("%d", &radius);

	printf("���� ������ %e �Դϴ�.", (double)radius * (double)radius * PI);

}