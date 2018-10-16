#include <stdio.h>
int main()
{
	int a[4];
	int x;
	int i, j;
	int cul=0;
	int b;
	int size = sizeof(a) / 4;
	printf("a입력:");
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	printf("x입력:");
	scanf("%d", &x);
	for (i = 0; i < size; i++) {
		b = a[i];
		for (j = 0; j < i ; j++) {
			
			b *= x;
		}
		cul += b;
		
	}
	for (i = 0; i < size; i++) {
		printf("a%d:%d ",i, a[i]);

	}
	printf("x:%d\n", x);
	
	printf("결과:a3x^3+a2x^2+a1x+a0=%d\n", cul);
}