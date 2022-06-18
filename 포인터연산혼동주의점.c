#include <stdio.h>

void main() {
	int x = 100;
	int* px = &x; //x의 주소를 저장하는 포인터
	//초기값 출력
	printf("x: %d\n", x);
	printf("&x: %d\n", &x);
	printf("*px: %d\n", *px);
	printf("px: %d\n", px);


	//1)px++
	px++;
	printf("x: %d\n", x);
	printf("&x: %d\n", &x);
	printf("*px: %d\n", *px);
	printf("px: %d\n", px);


	//2) *px++
	px = &x; //위에서 실행한 1번문제의 px값을 다시 초기화 시켜줌

	printf("x: %d\n", x);
	printf("&x: %d\n", &x);
	printf("*px: %d\n", *px);
	printf("*px++: %d\n", *px++); 
	//*px++ => *px가 가지고 있는 주소로 접근해 값을 먼저 가져온 후 증감 시킴. (후위 증감)
	printf("px: %d\n", px);






}