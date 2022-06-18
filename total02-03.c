#include <stdio.h>

void main() {

	int n = 2;
	int count = 0;

	while (count != 10) {

		for (int i = 2; ; i++) {
			if (i == n) {
				printf("%d ", n);
				count++;
				break;
			}
			else {
				if (n % i == 0) {
					break;
				}
			}
		}
		n++;


	}

}