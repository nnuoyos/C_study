#include <stdio.h>

void main() {

	//나이, 키, 몸무게 입력 받기
	//[초기값]
	//정수 : 0 
	//실수 : 0.0 
	//문자 : ' '

	int age = 0;
	double height = 0.0, weight = 0.0;

	printf("나이: ");
	scanf_s("%d", &age);

	printf("키: ");
	scanf_s("%lf", &height);

	printf("몸무게: ");
	scanf_s("%lf", &weight);


	printf("제 나이는 %d 살이고, 키는 %.2lfcm 입니다.\n 몸무게는 %.2lfkg입니다.\n", age, height, weight);

}