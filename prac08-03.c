#include <stdio.h>
#define CRT_SECURE_NO_WARNIGS

void main() {
	
	char* inputC = " ";
	while (1)
	{
		printf("\n�Է��ϼ���: ");
		scanf("%s", &inputC);
		printf("%c �Է��Ͽ����ϴ�.\n", inputC);
		
			
		if (inputC >= 65 && inputC <=90);
		{
			printf("���� �մϴ�.");
			break;
		}
	}
}