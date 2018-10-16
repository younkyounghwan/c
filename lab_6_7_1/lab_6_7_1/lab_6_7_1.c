/*
주제: 구조체 정의 연습
작성일 18 06 07
작성자 윤경환
*/
#include <stdio.h>
#include <math.h>
double sqrt(double x);


int main()
{
	//postion이라는 구조체 타입을 정의한다.
	//메모리 공간을 차지하지 않는다.
	struct postion {

		int xpos;
		int ypos;
	};
	
	struct postion p1, p2; //실제 데이터를 저장할 공간이 할당된다.
	printf("p1의 좌표 입력:");
	scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("p2의 좌표 입력:");
	scanf("%d %d", &p2.xpos, &p2.ypos);
	//좌표 줄력

	printf("p1의 좌표 (%d,%d)\n", p1.xpos, p1.ypos);
	printf("p2의 좌표 (%d,%d)\n", p2.xpos, p2.ypos);
	printf("두점사이의 거리:%.2f", sqrt((p1.xpos - p2.xpos)*(p1.xpos - p2.xpos) + (p1.ypos - p2.ypos)*(p1.ypos - p2.ypos)));
	return 0;
}