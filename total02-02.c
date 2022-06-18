#include <stdio.h>

void main() {

	int i, j ;
	int dan = 0, value = 0;
	int temp = 0;

	printf("정수 두 개 입력: ");
	scanf_s("%d %d", &i , & j);


	if(i>j){
		temp = i;
		i = j;
		j = temp;

	}
	for (dan = i; dan <= j; dan++) {
		for (value = 0; value < 9; value++) {
			printf("%d ", dan * (value+1));
		}
		printf("\n");
	}

}