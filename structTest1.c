#include <stdio.h>
#include <string.h>

#define L 3 //������ �� ���� ���, length 3���� ����

typedef struct WORKER {
	char name[200];
	char number[200];
	int pay;
}W; //����ü���� 

void main() {
	W* worker = 0;
	int size = 0;
	printf("������ �ο��� �Է��ϼ���\n");
	scanf_s("%d", &size);

	worker = (W*)calloc(size, sizeof(W));
	//WŸ���� �����ͷ� ����ȯ, calloc �����迭�� �ʱ�ȭ
	for (int i = 0; i < L; i++) {
		printf("���� %d�� �̸�: ", i + 1);
		scanf_s("%s", worker->name, sizeof(worker->name));

		printf("%s �� ��ȭ��ȣ", worker->name);//������ ���� %d��° ������ ���ڿ��� �״�� ������
		scanf_s("%s", worker->number, sizeof(worker->number));

		printf("%s �� ���޿�", worker->name);
		scanf_s("%d", &worker[i].pay); 
		//worker�� ����ü�� �ƴ϶� �迭!!
		//worker[]���ȣ�� �ѹ� �����ؾ� ����ü�� �ִ°�

		//worker�� �迭�̹Ƿ� �ϴ� "�� ��" ���� �Ѵ� . ��Ʈ �Ѱ� �ѹ�
		//-> ǥ�ô� "�� ��" �����Ѵٴ� �ǹ�!  . . ��Ʈ �ΰ�(->) �ι�


		printf("%s %s %d\n", worker->name, worker->number, worker[i].pay);
	}

//struct worker {
//	char name[200];
//	char number[200];
//	int pay;
//	//����ü ����
//};
//
//void main() {
//	struct worker person; //����ü ���� person ����
//	printf("������ �̸�: ");
//	gets(person.name);
//
//	printf("������ ��ȭ��ȣ: ");
//	gets(person.number);
//
//	printf("������ ���޿�: ");
//	scanf_s("%d", person.pay);


}
