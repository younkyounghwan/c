#include <stdio.h>
main()
{
	int a, b, i;
	int sum = 0;
	printf("2���� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &a, &b);
	if (a >= b) {
		for (i = b ; i <= a; i++) {
			sum += i;

		}

	}
	else {
		for (i = a; i <= b; i++) {
			sum += i;

		}
	}
	printf("%d�� %d������ �������� ��:%d", a, b, sum);
}