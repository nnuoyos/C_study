#include <stdio.h>
#include <stdlib.h>

#define L 3 //������ �� ���� ���, length 3���� ����

typedef struct Fruit {
	char name[200];
	int price;
	char season[200];
}F; //����ü���� 

void main() {
	F* fruits = 0;
	int size = 0;
	printf("������ ������ �Է��ϼ���\n");
	scanf_s("%d", &size);

	fruits = (F*)calloc(size,sizeof(F));
	//FŸ���� �����ͷ� ����ȯ, calloc �����迭�� �ʱ�ȭ
	for (int i = 0; i < L; i++) {
		printf("%d��° ���ϸ�: ", i+1);
		scanf_s("%s", fruits->name, sizeof(fruits->name));
		printf("%s ����", fruits->name);//name�� �迭�̶� �ּҰ� �״�� ���� &�ʿ����
		scanf_s("%d", &fruits[i].price); //price�� �Ϲݺ���, ������� �� ���̴�. &�� �ּҰ� �˷������
		//fruits�� ����ü�� �ƴ϶� �迭!!
		//fruits[]���ȣ�� �ѹ� �����ؾ� ����ü�� �ִ°�

		printf("%s ����", fruits->name);
		scanf_s("%s", fruits->season, sizeof(fruits->season));
		//fruits�� �迭�̹Ƿ� �ϴ� "�� ��" ���� �Ѵ� . ��Ʈ �Ѱ� �ѹ�
		//-> ǥ�ô� "�� ��" �����Ѵٴ� �ǹ�!  . . ��Ʈ �ΰ�(->) �ι�
		

		printf("%s %d %s\n", fruits->name, fruits[i].price, fruits->season);
	}



	//F fruits[L] = { //3��� ������ ������ L�� ���� 
	//	{"���", 1500, "����"},
	//	{"��", 3500, "�ܿ�"},
	//	{"�ٳ���", 500, "����"}
	//};

	//for (int i = 0; i < L; i++) { 
	//	//3�̶�� ���� ���� �����ϸ� ��������, �����Լ����� �����ؼ� ���� ������� �ν��� �ȵȴ�
	//	//F fruits[3] ����ü�� �޸𸮿� ���� �Ҵ� �Ǳ� ������ ���ʿ� 3�̶�� �� �ν����� ���Ѵ�
	//	//���� �����Լ��� ������ ���� ��ó���� ���ش�

	//	printf("%s %d %s\n", fruits[i].name, fruits[i].price, fruits[i].season);
	//	//fruits[i]��° ���� �迭�� �ݺ��ϸ� �ϳ��� ��� �ȴ� 
	//}



	//F apple = { "���", 1500, "����" };
	//F pear = { "��", 3500, "�ܿ�" };
	//F banana = { "�ٳ���", 500, "����" };

	//printf("%s %d %s\n", apple.name, apple.price, apple.season);
	//printf("%s %d %s\n", pear.name, pear.price, pear.season);
	//printf("%s %d %s\n", banana.name, banana.price, banana.season);
}