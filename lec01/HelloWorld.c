#ifdef _MSC_VER
   #define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
// radius * radius * 3.14
int main(int argc, char* argv[]) {

	double PI = 3.14;
	int radius;

	printf("반지름을 입력해주세요");
	scanf("%d", &radius);

	printf("원의 면적은 %e 입니다.", (double)radius * (double)radius * PI);

}