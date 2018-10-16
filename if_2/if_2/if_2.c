#include <stdio.h>
int main()
{
	int a; //곱할 수
	int b; //단수
	printf("구구단 출력\n");
	for (b = 2; b<9; b+=2) {
		printf("===%d단===\n", b);
		for (a = 1; a <= b; a++) {
			printf("%dx%d=%d\n", b, a, b*a);

		}
		printf("\n");

	}
	return 0;
}