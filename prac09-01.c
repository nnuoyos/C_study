#include <stdio.h>
#include <string.h>

void main() {

	//���̰� 5�� int�� �迭 ����, �ʱ�ȭ ����Ʈ�� ����� �ʱ�ȭ 
	//����� �� �հ� ��� ���ϱ�

	int arData[5] = { 2, 5, 8, 17, 21};

	int total = 0;
	double avg=0;
	
	for (int i = 0; i < 5; i++) {
		total += arData[i];
	}


	avg = total / 5.0;
	printf("�� ��: %d\n", total);
	printf("���: %.1f\n", avg);







	//���� �ܾ �Է¹޾� char�� �迭�� ����. ����� �ܾ �������� ������ ���

	char word[30] = "";
	int length = 0;

	printf("���ܾ� �Է�: ");
	scanf_s("%s", word, sizeof(word));

	length = strlen(word);

	for (int i = 0; i < length; i++) {
		printf("%c", word[length - 1 - i]); // hello �Ųٷ� length-1= 4, i=0 => i++�� �����ϸ� 4,3,2,1,0 ������ ����

	}






	//���ܾ� �Է�, �ƽ�Ű�ڵ尪�� ���� ū ���ڸ� �˷��ֱ�
	//printf("%d", 'a' > 'b');


	char word[30] = "";
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