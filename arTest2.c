#include <stdio.h>

void main() {
	//1~100 까지 배열에 담은 후 홀수만 출력
	int arData[100] = { 0, };

	for (int i = 0; i < 100; i++) {
		arData[i] = i + 1;
		if (arData[i] % 2 == 1) {
			printf("%d\n", arData[i]);
		}
	}




	//1~100까지 배열에 담은 후 짝수의 합 출력
	int arData[100] = { 0, };
	int total = 0;

	for (int i = 0; i < 100; i++) {
		arData[i] = i + 1;
		if (arData[i] % 2 == 0) {
			total += arData[i];
		}
	}
	printf("%d\n", total);





	//A~F까지 중 C를 제외하고 배열에 담은 후 출력
	//0 1 2 3 4=A B C D E => C=2
	//+65 대문자 A의 아스키코드 

	char arData[5] = {' ', };
	for (int i = 0; i < 5; i++) {
		arData[i] =i>1 ? 66+i : 65 + i;
		printf("%c ", arData[i]);
	}







	//5개의 정수를 입력받고 최대값과 최소값 구하기

	int arData[5] = { 0, };

	int max = 0;
	int min = 0;

	for (int i = 0; i < 5; i++) {
		printf("%d 번째 정수: ", i + 1);
		scanf_s("%d", arData+i); //&arData[i] => scanf_s 주소 쓸 때 중복되는 연산이므로 이렇게 쓰지 않아도 된다 

	}

	max = arData[0];
	min = arData[0];

	for (int i = 1; i < 5; i++) { // 0번째 방과 0번 방을 비교하는건 의미가 없으므로 1번 방부터 비교 시작
		if (max < arData[i]) { max = arData[i]; }
		if (min > arData[i]) { min = arData[i]; }
	}

	printf("최대값: %d\n최소값: %d", max, min);






	//aBcDeFgHiJkLmNoPqRsTuVwXyZ 배열에 담기
	//0123456... 짝수일 때 소문자, 홀수 일 때 대문자인 규칙을 찾아야함

	char arData[26] = { ' ', };
	for (int i = 0; i < 26; i++) {
		arData[i] = i % 2 == 0 ? 97 + i : 65 + i;
		printf("%c", arData[i]);
	}







}