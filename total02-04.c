
#include <stdio.h>

void main() {



}
	int num1, num2 = 0;
	char sign = ' ';

	printf("�ǿ�����1: ");
	scanf_s("%d", &num1);

	printf("������: ");
	scanf_s("%c", &sign);

	sign = getch();
	printf("�ǿ�����2: ");
	scanf_s("%d", &num2);

	switch (sign) {

	case '+':
		printf("%d %c %d=%d", num1, sign, num2, num1 + num2);
		break;

	case '-':
		printf("%d %c %d=%d", num1, sign, num2, num1 - num2);
		break;

	case '*':
		printf("%d %c %d=%d", num1, sign, num2, num1 * num2);
		break;

	case '/':
		printf("%d %c %d=%d", num1, sign, num2, num1 / num2);
		break;
	
	}


}