#include <stdio.h>

void main() {

	int data = 10;
	int* pData = &data; //int*�����Ϳ�����
	printf("%d\n", *pData); // *pData����������
	*pData = 20;
	printf("%d\n",data);


}