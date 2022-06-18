#include <stdio.h>
#include <string.h>

void main() {
	char title[20] = "★SY CAFE☆";
	char menu[100] = "①추가하기\n②수정하기\n③검색하기\n④삭제하기\n⑤목록보기\n⑥나가기";
	//메뉴 이름, 메뉴 가격
	char arName[200][100] = { "", };
	char temp[100] = "";
	int arPrice[200] = { 0, }; //메뉴가 200개이므로 가격도 200개까지
	int choice = 0;
	int cnt = 0;
	int isDup = 0;
	int foundIdx = 0;

	while (1) {
		printf("%s\n%s\n", title, menu);
		scanf_s("%d", &choice);
	
		if (choice == 6) { break; }

		switch (choice) {
		case 1://추가
			printf("추가하실 메뉴 이름: ");
			scanf_s("%s", temp, sizeof(temp));
	
			isDup = 0;
			for (int i = 0; i < cnt; i++) { //중복체크
				if (!strcmp(temp, arName[i])) {
					isDup=1;
					break;
				}
			}
			
			if (!isDup) {
				printf("메뉴 가격: ");
				scanf_s("%d", arPrice + cnt);
				strcpy_s(arName[cnt], sizeof(arName[cnt]), temp);
				cnt++;
			}


			else {
				printf("이미 존재하는 상품 입니다.");
			}

			break;

		case 2://수정
			printf("수정하실 기존 상품명: ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0; //초기화
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					isDup = 1;
					foundIdx = i;
					break;
				}
			}

			if (isDup) {
				printf("수정하실 새로운 상품명: ");
				scanf_s("%s", temp, sizeof(temp));
				isDup = 0;
				for (int i = 0; i < cnt; i++) {
					if (!strcmp(temp, arName[i])) {
						isDup = 1;
						break;
					}
				}

				if (!isDup) {
					printf("상품 가격: ");
					scanf_s("%d", arPrice + foundIdx);
					strcpy_s(arName[foundIdx], sizeof(arName[foundIdx]), temp);
				}
				else {
					printf("이미 존재하는 상품명 입니다.\n");
				}
			}
			else {
				printf("수정하실 상품이 존재하지 않습니다.\n");
			}

			break;

		case 3://검색
			printf("검색하실 상품명 입력: ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					printf("%s(%d원)\n", arName[i], arPrice[i]);
					isDup = 1;
					break;
				}
			}

			if (!isDup) {
				printf("검색하신 상품이 존재하지 않습니다.\n");
			}



			break;

		case 4://삭제
			printf("삭제할 상품명 입력: ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;

			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
	
					isDup = 1;
					foundIdx = i;
					break;
				}
			}

			if (isDup) {
				for (int i = foundIdx; i < cnt; i++) { //삭제는 삭제할 곳을 뒤에서부터 덮어쓰기
					if (i == 199) {//마지막 값
						strcpy_s(arName[i], sizeof(arName[i]), "");

					}
					else {
						strcpy_s(arName[i], sizeof(arName[i]), arName[i + 1]);
					}
				}
				cnt--;
			}	
			else {
				printf("삭제하실 상품이 존재하지 않습니다.\n");
			}


			break;

		case 5://목록
			printf("상품명(가격)\n");
			for (int i = 0; i < cnt; i++) {
				printf("%s(%d원)\n", arName[i], arPrice[i]);
			}
			if (cnt == 0) {
				printf("상품 없음\n");
			}

			break;
		}
	}




}