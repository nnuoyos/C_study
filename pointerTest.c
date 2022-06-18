#include <stdio.h>

void main() {

	int data = 10;
	int* pData = &data; //int*포인터연산자
	printf("%d\n", *pData); // *pData참조연산자
	*pData = 20;
	printf("%d\n",data);


}