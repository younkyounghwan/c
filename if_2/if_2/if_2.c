#include <stdio.h>
int main()
{
	int a; //���� ��
	int b; //�ܼ�
	printf("������ ���\n");
	for (b = 2; b<9; b+=2) {
		printf("===%d��===\n", b);
		for (a = 1; a <= b; a++) {
			printf("%dx%d=%d\n", b, a, b*a);

		}
		printf("\n");

	}
	return 0;
}