#include <stdio.h>
#define CRT_SECURE_NO_WARNIGS

void main() {
	
	char* inputC = " ";
	while (1)
	{
		printf("\n입력하세요: ");
		scanf("%s", &inputC);
		printf("%c 입력하였습니다.\n", inputC);
		
			
		if (inputC >= 65 && inputC <=90);
		{
			printf("종료 합니다.");
			break;
		}
	}
}