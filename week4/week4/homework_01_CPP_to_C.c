#include <stdio.h>

int main() {
	char c[101];
	printf("���ڸ� �Է��ϼ���(100�� �̳�)\n");
	scanf_s("%s", c, sizeof(c));
	printf("�Էµ� ���ڴ� %s�Դϴ�.", c);

	return 0;
}