#include <stdio.h>
int main()
{
	int a=1;
	int b=1;
	while (1) {
		b++;
		if (b % 2 == 1)
			continue;
		printf("===%d´Ü===\n", b);

		while (1) {
			if (a > b)
				break;
			printf("%dx%d=%d\n", b, a, b*a);
			a++;

		}
		a = 1;
		printf("\n");
		if (b >= 8)
			break;
	}
	return 0;
}