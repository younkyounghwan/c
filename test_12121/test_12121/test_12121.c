#include <stdio.h>
int main()
{

	int num;
	int i, j;
	char arr[80];
	int count;
	int plus;
	scanf("%d", &num);
	for (i = 0; i<num; i++) {
		count = 0;
		plus = 0;
		scanf("%s", &arr);

		for (j = 0; arr[j] != 0; j++) {

			if (arr[j] == 'O') {
				plus++;
				count += plus;
			}

			else if (arr[j] == 'X')
				plus = 0;
		}

		printf("%d\n", count);
	}



	return 0;
}
