#include <stdio.h>
int main()
{
	int a = 1;
	int i=0;
	while(i<=100)  {
		i++;
		if (i % 7 == 0 && i % 9 == 0) {
			printf("%d�� 7�� 9�� ���\n", i);
			continue;

		}		
		if (i % 7 == 0)
			printf("%d�� 7�ǹ��\n", i);
		if (i % 9 == 0)
			printf("%d�� 9�� ���\n", i);
		
	} 
	

}