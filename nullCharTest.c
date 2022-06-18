#include <stdio.h>
#include <string.h>
void main() {
	char nation[6] = "ko\0rea";
	printf("%s\n", nation);
	printf("%d\n", strlen(nation));

}