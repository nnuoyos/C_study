#include <stdio.h>


void function(int*);

void main() {
	int data = 10; //10이라는 값을 전달한 게 아니라, data '주소' 를 전달한 것
	function(&data);
	printf("%d", data);
}

void function(int* pData) {
	*pData = 20; 
	// data 주소에 *p 접근해서 값을 20을 변경, 따라서 functon에 리턴이 없어도 값이 변경 됨
}