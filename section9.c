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
	//	printf("�迭�� ��� ����� �� ��: %d\n", total);
	//	printf("�迭�� ��� ����� ���(�Ǽ���): %.1f",avg);








	//char word[30];

	//printf("���ܾ� �Է�: ");
	//scanf_s("%s", word, sizeof(word));

	//length = strlen(word);

	//printf("%d", length);

	//for (int = 0; i < length; i++) {
	//	printf("%c", word[length - 1 - i]);
	//}








	char word[30]="";
	int length = 0;
	int max = 0;


	printf("���ܾ� �Է�: ");
	scanf_s("%s", word, sizeof(word));

	max = word[0];

	length = strlen(word);
	for (int i = 0; i < length; i++) {
		if (max < word[i]) { max = word[i]; }
	}


	printf("�ƽ�Ű�ڵ尡 ���� ū ����: %c", max);
}



