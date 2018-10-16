#include <stdio.h>
int main()
{
	char*subject[] = { "수학", "과학", "국어" };
	int i;

	printf("subject의 크기:%d\n", sizeof(subject));

	for (i = 0; i < 3; i++) {
		printf("%s\n", subject[i]);

	}
	return 0;

}