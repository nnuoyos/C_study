#include <stdio.h>


void function(int*);

void main() {
	int data = 10; //10�̶�� ���� ������ �� �ƴ϶�, data '�ּ�' �� ������ ��
	function(&data);
	printf("%d", data);
}

void function(int* pData) {
	*pData = 20; 
	// data �ּҿ� *p �����ؼ� ���� 20�� ����, ���� functon�� ������ ��� ���� ���� ��
}