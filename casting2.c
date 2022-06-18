#include <stdio.h>

void main() {
	//강제 형변환
	printf("%.2lf\n", (int)8.43 + 2.59); //int 8.43 => 8 , 8+2.59 =10.59(실수이므로 %lf)
	printf("%d\n", (int)(8.43 + 2.59)); //단항 연산자 보다 최우선 연산자가 먼저 int(11.02)=> 11(정수이므로 %d)
	printf("%d\n", (int)8.43 + (int)2.59);

	//문자 형변환
	printf("%d\n", 'A' + 1);
	printf("%c\n", 'A' + 1); //비밀번호 암호화->복호화 *아스키코드

}