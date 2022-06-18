#include <stdio.h>
#include <stdlib.h>

#define L 3 //수정할 수 없는 상수, length 3으로 정의

typedef struct Fruit {
	char name[200];
	int price;
	char season[200];
}F; //구조체별명 

void main() {
	F* fruits = 0;
	int size = 0;
	printf("과일의 개수를 입력하세요\n");
	scanf_s("%d", &size);

	fruits = (F*)calloc(size,sizeof(F));
	//F타입의 포인터로 형변환, calloc 동적배열로 초기화
	for (int i = 0; i < L; i++) {
		printf("%d번째 과일명: ", i+1);
		scanf_s("%s", fruits->name, sizeof(fruits->name));
		printf("%s 가격", fruits->name);//name은 배열이라서 주소가 그대로 있음 &필요없음
		scanf_s("%d", &fruits[i].price); //price는 일반변수, 저장공간 즉 값이다. &로 주소값 알려줘야함
		//fruits는 구조체가 아니라 배열!!
		//fruits[]대괄호로 한번 접근해야 구조체가 있는것

		printf("%s 시즌", fruits->name);
		scanf_s("%s", fruits->season, sizeof(fruits->season));
		//fruits가 배열이므로 일단 "한 번" 접근 한다 . 도트 한개 한번
		//-> 표시는 "두 번" 접근한다는 의미!  . . 도트 두개(->) 두번
		

		printf("%s %d %s\n", fruits->name, fruits[i].price, fruits->season);
	}



	//F fruits[L] = { //3대신 위에서 정의한 L을 기입 
	//	{"사과", 1500, "가을"},
	//	{"배", 3500, "겨울"},
	//	{"바나나", 500, "여름"}
	//};

	//for (int i = 0; i < L; i++) { 
	//	//3이라는 값을 따로 선언하면 좋겠지만, 메인함수에서 선언해서 쓰면 상수여도 인식이 안된다
	//	//F fruits[3] 구조체가 메모리에 먼저 할당 되기 때문에 애초에 3이라는 걸 인식하지 못한다
	//	//따라서 메인함수가 읽히기 전에 전처리를 해준다

	//	printf("%s %d %s\n", fruits[i].name, fruits[i].price, fruits[i].season);
	//	//fruits[i]번째 방을 배열로 반복하며 하나씩 출력 된다 
	//}



	//F apple = { "사과", 1500, "가을" };
	//F pear = { "배", 3500, "겨울" };
	//F banana = { "바나나", 500, "여름" };

	//printf("%s %d %s\n", apple.name, apple.price, apple.season);
	//printf("%s %d %s\n", pear.name, pear.price, pear.season);
	//printf("%s %d %s\n", banana.name, banana.price, banana.season);
}