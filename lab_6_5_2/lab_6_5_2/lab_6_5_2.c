#include <stdio.h>
int main()
{
	char*subject[] = { "����", "����", "����" };
	int i;

	printf("subject�� ũ��:%d\n", sizeof(subject));

	for (i = 0; i < 3; i++) {
		printf("%s\n", subject[i]);

	}
	return 0;

}