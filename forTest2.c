#include <stdio.h>

void main() {

	//1~100까지 출력

	//int i;
	//for (i = 0; i < 100; i++)
	//{
	//	printf("지금은 %d 입니다.\n", i+1);
	//}





	//100부터 1까지 출력

	//for (int i = 100; i > 0 ; i--)
	//{
	//	printf("지금은 %d 입니다.\n", i);
	//}





	//1부터 100까지 짝수만 출력

	//for (int i = 0; i<50; i++)
	//{
	//	printf("%.d\n", (i+1)*2); */
	//i+1=>1부터100까지, (i+1)*2=> i<50일때 i=49이고 (49+1)*2=100이므로 100까지의 짝수가 나옴
	//}




	//1~10까지 총 합 출력하기
	//int total = 0;
	//for (int i = 0; i < 10; i++)
	//{	
	//	total = total + i + 1; //누적되어 10까지 더해짐
	//	printf("%d\n", total);
	//}
	




	//1~n까지의 합 출력

	//char* msg = "1~n까지의 합\nnum:";
	//int end, total = 0;

	//printf("%s", msg);
	//scanf_s("%d", &end);


	//for (int i = 0; i < end; i++)
	//{
	//	total += i + 1;

	//}
	//printf("%d\n", total);





	//A~F까지 출력(아스키코드)
	// 
	//A:65
	//for (int i = 0; i < 6; i++)
	//{
	//	printf("%c\n", i + 65); 
	//	//65를 문자열 형변환하면 A가 나온다. A에서부터 6번 반복하면 A~F
	//}



	//A~F까지 B제외하고 출력

	//int temp = 0;

	//for (int i = 0; i < 5; i++){
	//	temp = i; //임시 저장소 변수를 생성하여, i의 값은 변함없이 원하는 값만 증가시킴
	//	if (i > 0) { temp++; }
	//	printf("%c\n", 65 + i);
	//}

	//for (int i = 0; i < 5; i++) {

	//	printf("%c\n", i > 0 ? i + 65 + 1 : i + 65);
	//	//삼항연산자 이용하여 중간의 B값을 제외시키는 방법
	//}




}