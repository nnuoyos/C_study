#include <stdio.h>

//	//1~10���� printf()�� ����ϴ� �Լ�
//void printfFrom1To10() {
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", i + 1);
//	}
//}//return�� �����Ƿ� ���� void ���ֱ�





//	//1~10������ ���� �����ִ� �Լ�
//int getTotalFrom1To10() { //total�� i+1�� �����Ѱ��̹Ƿ� ���� ���� int
//	int total = 0;
//	for (int i = 0; i < 10; i++) {
//		total += i + 1;
//	}
//	return; //���� �����ִ� ���̹Ƿ� ���� 
//}




//	//1~n������ ���� �����ִ� �Լ�
//int getTotalFrom1(int end) {
//	int total = 0;
//	for (int i = 0; i < end; i++) {
//		total += i + 1;
//	}
//	return total; 
//}




	//Ȧ���� ¦���� ¦���� Ȧ���� �ٲپ��ִ� �Լ�
int change(int num) {//�ܺο��� ���� �ޱ� num
	return ++num; //������ 1�� �����ָ� Ȧ���� ¦����, ¦���� Ȧ���� �ٲ�� ��
	//������ �����̹Ƿ� �ش���κ��� ������ ���ڷ� ��Ÿ��
	}
	
	
	
	//5���� ������ �Է¹ް� �ּҰ��� �ִ밪�� �����ִ� �Լ�
int* getMaxAndMin(int arData[]) {//int* =>maxAndMin�� �������� �� ������ ��� �ּҰ��� �����ϱ� ����
	int maxAndMin[2]= {0, }; //max, min �ΰ��� ���� �ϳ��� �����ϱ� ���� �迭 �����
	int max = arData[0];
	int min = arData[0];

	for (int i = 1; i < 5; i++) {
		if (max < arData[i]) { max = arData[i]; }
		if (min > arData[i]) { min = arData[i]; }
	}
	maxAndMin[0] = max;
	maxAndMin[1] = min;

	return maxAndMin; //maxAndMin�� ���� �ּ����� �����ϰ� �־�� ��!

}




int getTotalFrom1(int);

void main() {
	printf("%d", getTotalFrom1(10));

}


	//1~n������ ���� �����ִ� �Լ�
int getTotalFrom1(int end) {
	int total = 0;
	for (int i = 0; i < end; i++) {
		total += i + 1;
	}
	return total;
}