#include <stdio.h>

void main() {

	int age = 0;
	int price = 0;

	printf("나이를 입력하세요:");
	scanf_s("%d", &age);

	price=age >= 20 ? 1250 : 800;

	printf("당신의 나이는 %d세이며, 요금은 %d원 입니다!", age, price);

}