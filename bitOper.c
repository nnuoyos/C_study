#include <stdio.h>

void main() {
	printf("%d\n", 10 & 11);
	printf("%d\n", 10 | 11);
	printf("%d\n", 10 ^ 11);

	printf("%d\n", ~10);
	printf("%d\n", ~9) ; // ���� ~a=-a-1

	printf("%d\n", 10 << 1);
	printf("%d\n", 10 >> 1);
}