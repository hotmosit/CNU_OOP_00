#include <stdio.h>

int main() {
	char c[101];
	printf("문자를 입력하세요(100자 이내)\n");
	scanf_s("%s", c, sizeof(c));
	printf("입력된 문자는 %s입니다.", c);

	return 0;
}