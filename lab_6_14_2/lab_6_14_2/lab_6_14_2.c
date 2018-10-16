/*
주제: 구조체 내에 맴버(number)로서 구조체 정의
작성일 18 06 14
작성자 윤경환
*/
#include <stdio.h>
#include "rectangle.h"
//좌표평면의 점을 표현
/*
int which_one(int a, int b)
{
	if (a >= b) //조건
		return a - b; //반환
	else //조건
		return b - a; //반환
}
*/
int main()
{

	//사각형을 초기화
	struct rectangle r; //구조체 정의
	struct point pp1;
	struct point pp2;

	r.p1 = &pp1;
	r.p2 = &pp2;
	while (1) { //무한 루프



		printf("첫번째 점 입력:"); //문구 출력
		scanf("%d %d", &pp1.xpos, &pp1.ypos); //좌표 입력
		printf("두번째 점 입력:"); //문구 출력
		scanf("%d %d", &pp2.xpos, &pp2.ypos); //좌표 입력

												//사각형의 두 점을 출력
												//printf("(%d, %d), (%d, %d)\n", r.p1.xpos, r.p1.ypos, r.p2.xpos, r.p2.ypos);
												//사각형의 네 점을 출력
		if (*(r.p1).xpos == *(r.p2).ypos || *(r.p1).ypos == *(r.p2).ypos) {


			printf("두 점은 사각형을 이룰 수 없습니다.\n"); //문구 출력

		}
		else { //조건



			printf("(%d, %d), (%d, %d) (%d, %d), (%d, %d)\n", r.p1.xpos, r.p1.ypos, r.p1.xpos, r.p2.ypos, r.p2.xpos, r.p1.ypos, r.p2.xpos, r.p2.ypos); //좌표 출력
			break; //나가기
		}
	}


	return 0;
}