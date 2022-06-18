#include <stdio.h>

void main() {

	const char* fruit = "apple"; //const 직접 접근해서 주소를 바꾸지 말라는 의미
	fruit = "banana";
	printf("%s", fruit);
	
	//*fruit = 'c';
	printf("%s", fruit);



}