#include <stdio.h>

void main() {

	//0 1 2 0 1 2 0 1 2 출력 범위는 0~2
	//0 1 2 3 4 5 6 7 8 : i
	//n % a = 0~a-1

	//for (int i= 0; i < 9; i++) {

	//	printf("%d ", i % 3);
	//}




	//aBcDeFgHiJkLmNoPqRsTuVwXyZ 출력

	//소문자13, 대문자13
	//a=97 A=65 aBcD=>0123 짝수:소문자 홀수:대문자

	for (int i = 0; i< 26; i++) {
		printf("%c", i % 2 == 0 ? 97 + i : 65 + i);

		}


}