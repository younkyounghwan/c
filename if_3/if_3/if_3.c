#include <stdio.h>
int main()
{
	int a = 0;
	int z = 0;
	int sum = 0;
	printf("���� ���� �����ϴ� A�� Z��:\n");
	while (1) {
		
		if (sum > 100) 
			break;
		z = 0;
		sum = 0;
		while (1) {
			sum = a * 10 + z + z * 10 + a;
			if (sum > 100)
				break;
			if (sum == 99) {
				printf("A�� %d�� ��, Z�� %d\n", a, z);
				break;
			}
			z++;
			
		}

		
		a++;
	}
	return 0;
}