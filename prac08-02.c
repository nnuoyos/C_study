#include <stdio.h>

void main() {

	//1~100까지 중 6의 배수만 출력 (for문 사용)
	//int num, mul;


	//for (num = 6; num < 7; num++)
	//{

	//	for (mul = 1; mul < 17; mul++)
	//		printf("%d ", num * mul);
	//
	//}


	for (int i = 1; i < 100; i++)
	{
		if (i % 6 == 0)
		{
			printf("%d ", i);
		}
	}

}