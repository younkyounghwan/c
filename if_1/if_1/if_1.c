#include <stdio.h>
int main()
{
	int a = 1;
	int i=0;
	while(i<=100)  {
		i++;
		if (i % 7 == 0 && i % 9 == 0) {
			printf("%d는 7과 9의 배수\n", i);
			continue;

		}		
		if (i % 7 == 0)
			printf("%d는 7의배수\n", i);
		if (i % 9 == 0)
			printf("%d는 9의 배수\n", i);
		
	} 
	

}