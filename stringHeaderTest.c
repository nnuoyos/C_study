#include <stdio.h>
#include <string.h>

void main() {

	char nation[6] = "korea";

	//nation = "japan"; <- �̷��� �ϸ� �ȵ�
	// 
	scanf_s("%s", nation, sizeof(nation));
	printf("%s\n", nation);

	strcpy_s(nation, sizeof(nation), "japan");
	printf("%s\n", nation);

	printf("%d\n", strcmp(nation, "japan")); //1 ����
	printf("%d\n", strcmp(nation, "apple")); // 1 ����
	printf("%d\n", strcmp(nation, "data"));
	printf("%d\n", strcmp(nation, "korea")); //0 ��

	scanf_s("%s", nation, sizeof(nation));
	if (!strcmp(nation, "korea")) {
		printf("�� ���� ���� ���Դϴ�.\n");
	}

}