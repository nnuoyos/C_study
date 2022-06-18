#include <stdio.h>
#include <string.h>

#define L 3 //수정할 수 없는 상수, length 3으로 정의

typedef struct WORKER {
	char name[200];
	char number[200];
	int pay;
}W; //구조체별명 

void main() {
	W* worker = 0;
	int size = 0;
	printf("직원의 인원을 입력하세요\n");
	scanf_s("%d", &size);

	worker = (W*)calloc(size, sizeof(W));
	//W타입의 포인터로 형변환, calloc 동적배열로 초기화
	for (int i = 0; i < L; i++) {
		printf("직원 %d의 이름: ", i + 1);
		scanf_s("%s", worker->name, sizeof(worker->name));

		printf("%s 의 전화번호", worker->name);//위에서 받은 %d번째 직원의 문자열을 그대로 가져옴
		scanf_s("%s", worker->number, sizeof(worker->number));

		printf("%s 의 월급여", worker->name);
		scanf_s("%d", &worker[i].pay); 
		//worker는 구조체가 아니라 배열!!
		//worker[]대괄호로 한번 접근해야 구조체가 있는것

		//worker가 배열이므로 일단 "한 번" 접근 한다 . 도트 한개 한번
		//-> 표시는 "두 번" 접근한다는 의미!  . . 도트 두개(->) 두번


		printf("%s %s %d\n", worker->name, worker->number, worker[i].pay);
	}

//struct worker {
//	char name[200];
//	char number[200];
//	int pay;
//	//구조체 정의
//};
//
//void main() {
//	struct worker person; //구조체 변수 person 선언
//	printf("직원의 이름: ");
//	gets(person.name);
//
//	printf("직원의 전화번호: ");
//	gets(person.number);
//
//	printf("직원의 월급여: ");
//	scanf_s("%d", person.pay);


}
