#include <stdio.h>
#include <string.h>

void main() {

	//int arData[5] = { 2, 5, 8, 17, 21 };

	//int total = 0;
	//double avg = 0.0;

	//for (int i = 0; i < 5; i++) {
	//	total += arData[i];
	//}

	//	avg = total / 5.0;
	//	printf("배열의 모든 요소의 총 합: %d\n", total);
	//	printf("배열의 모든 요소의 평균(실수형): %.1f",avg);








	//char word[30];

	//printf("영단어 입력: ");
	//scanf_s("%s", word, sizeof(word));

	//length = strlen(word);

	//printf("%d", length);

	//for (int = 0; i < length; i++) {
	//	printf("%c", word[length - 1 - i]);
	//}








	char word[30]="";
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



