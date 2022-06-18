#include <stdio.h>

//	//1~10까지 printf()로 출력하는 함수
//void printfFrom1To10() {
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", i + 1);
//	}
//}//return이 없으므로 위에 void 써주기





//	//1~10까지의 합을 구해주는 함수
//int getTotalFrom1To10() { //total은 i+1을 누적한것이므로 정수 따라서 int
//	int total = 0;
//	for (int i = 0; i < 10; i++) {
//		total += i + 1;
//	}
//	return; //값을 구해주는 것이므로 리턴 
//}




//	//1~n까지의 합을 구해주는 함수
//int getTotalFrom1(int end) {
//	int total = 0;
//	for (int i = 0; i < end; i++) {
//		total += i + 1;
//	}
//	return total; 
//}




	//홀수를 짝수로 짝수를 홀수로 바꾸어주는 함수
int change(int num) {//외부에서 정수 받기 num
	return ++num; //정수에 1씩 더해주면 홀수는 짝수로, 짝수는 홀수로 바뀌게 됨
	//전위형 증감이므로 해당라인부터 증가된 숫자로 나타남
	}
	
	
	
	//5개의 정수를 입력받고 최소값과 최대값을 구해주는 함수
int* getMaxAndMin(int arData[]) {//int* =>maxAndMin가 접근했을 때 정수가 담긴 주소값을 리턴하기 위해
	int maxAndMin[2]= {0, }; //max, min 두개의 값을 하나로 리턴하기 위해 배열 만들기
	int max = arData[0];
	int min = arData[0];

	for (int i = 1; i < 5; i++) {
		if (max < arData[i]) { max = arData[i]; }
		if (min > arData[i]) { min = arData[i]; }
	}
	maxAndMin[0] = max;
	maxAndMin[1] = min;

	return maxAndMin; //maxAndMin는 시작 주소임을 인지하고 있어야 함!

}




int getTotalFrom1(int);

void main() {
	printf("%d", getTotalFrom1(10));

}


	//1~n까지의 합을 구해주는 함수
int getTotalFrom1(int end) {
	int total = 0;
	for (int i = 0; i < end; i++) {
		total += i + 1;
	}
	return total;
}