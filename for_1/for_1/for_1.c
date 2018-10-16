#include <stdio.h>
main()
{
	int a, b, i;
	int sum = 0;
	printf("2개의 정수를 입력하시오:");
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
	printf("%d와 %d사이의 정수들의 합:%d", a, b, sum);
}