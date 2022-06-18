#include <stdio.h>
#include <string.h>

void main() {

	//길이가 5인 int형 배열 선언, 초기화 리스트를 사용해 초기화 
	//요소의 총 합과 평균 구하기

	int arData[5] = { 2, 5, 8, 17, 21};

	int total = 0;
	double avg=0;
	
	for (int i = 0; i < 5; i++) {
		total += arData[i];
	}


	avg = total / 5.0;
	printf("총 합: %d\n", total);
	printf("평균: %.1f\n", avg);







	//영어 단어를 입력받아 char형 배열에 저장. 저장된 단어를 역순으로 뒤집어 출력

	char word[30] = "";
	int length = 0;

	printf("영단어 입력: ");
	scanf_s("%s", word, sizeof(word));

	length = strlen(word);

	for (int i = 0; i < length; i++) {
		printf("%c", word[length - 1 - i]); // hello 거꾸로 length-1= 4, i=0 => i++로 증가하면 4,3,2,1,0 순서로 나옴

	}






	//영단어 입력, 아스키코드값이 가장 큰 문자를 알려주기
	//printf("%d", 'a' > 'b');


	char word[30] = "";
	int length = 0;
	int max = 0;



	printf("영단어 입력: ");
	scanf_s("%s", word, sizeof(word));

	max = word[0];

	length = strlen(word);
	for (int i = 0; i < length; i++) {
		if (max < word[i]) { max = word[i]; }
	}
	printf("아스키코드가 가장 큰 문자: %c", max);





}