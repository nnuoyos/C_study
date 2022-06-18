#include <stdio.h>

void main() {


	//나이를 입력하세요 12이상
	//	키를 입력하세요 120 이상 
	//	놀이기구에 탑승할 수 있습니다


	int age = 0, height = 0;
	int canRide = 0;

	printf("나이를 입력하세요:");
	scanf_s("%d", &age);
	printf("키를 입력하세요:");
	scanf_s("%d", &height);

	canRide= age >= 12 && height >= 120;
	printf(canRide ? "놀이기구 탑승해라" : "놀이기구 타지마라");
	



}