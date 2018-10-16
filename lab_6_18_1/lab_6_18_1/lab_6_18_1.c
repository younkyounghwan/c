#include <stdio.h>
#include "movie.h"
int main()
{
	int i;
	struct movie s[5] = {
		{ 1, "쥬라기 월드", 2018,0,0,0,0 },
		{ 2, "탐정",2018,0,0,0,0 },
		{ 3, "오션스 8", 2018,0,0,0,0 },
		{ 4, "독전", 2018,0,0,0,0 },
		{ 5, "물물교환", 2017,0,0,0,0 },
	};

	
	

	printf("다음 중 하나를 선택하여 번호를 입력하시오:\n");
	printf("1. 쥬라기 월드, 2018\n");
	printf("2. 탐정, 2018\n");
	printf("3. 오션스 8,2018\n");
	printf("4. 독전, 2018\n");
	printf("5. 물물교환, 2017\n");
	printf("6. 종료\n");
	while (1) {
		printf("영화번호 입력:\n");
		scanf("%d", &i);
		
		switch(s[i-1].id)
		{
			case 1:
				printf("%d", s[i - 1].id);
				s[i - 1].input++;
				printf("평점(0~5):");				
				scanf("%d", &s[i - 1].aver);
				s[i - 1].sum += s[i - 1].aver;
				s[i - 1].aver_sum = s[i - 1].sum / s[i - 1].input;
				continue;
			case 2:
				printf("%d", s[i - 1].id);
				s[i - 1].input++;
				printf("평점(0~5):");
				scanf("%d", &s[i - 1].aver);
				s[i - 1].sum += s[i - 1].aver;
				s[i - 1].aver_sum = s[i - 1].sum / s[i - 1].input;
				continue;
			case 3:
				printf("%d", s[i - 1].id);
				s[i - 1].input++;
				printf("평점(0~5):");
				scanf("%d", &s[i - 1].aver);
				s[i - 1].sum += s[i - 1].aver;
				s[i - 1].aver_sum = s[i - 1].sum / s[i - 1].input;
				continue;
			case 4:
				printf("%d", s[i - 1].id);
				s[i - 1].input++;
				printf("평점(0~5):");
				scanf("%d", &s[i - 1].aver);
				s[i - 1].sum += s[i - 1].aver;
				s[i - 1].aver_sum = s[i - 1].sum / s[i - 1].input;
				continue;
			case 5:
				printf("%d", s[i - 1].id);
				s[i - 1].input++;
				printf("평점(0~5):");
				scanf("%d", &s[i - 1].aver);
				s[i - 1].sum += s[i - 1].aver;
				s[i - 1].aver_sum = s[i - 1].sum / s[i - 1].input;
				continue;
			case 6:
				break;
				

		}
		break;

		

	}
	printf("=======================================================================\n평점 정보\n");
	for (i = 0; i < 5; i++) {
		printf("%d. %s, %d, %d, %.1f\n", s[i].id, s[i].title, s[i].year, s[i].input, s[i].aver_sum);

	}
	return 0;


}