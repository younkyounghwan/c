/*
주제: 원 구조체 배열 연습
작성일 18 06 12
작성자 윤경환

*/
#include <stdio.h>
#define size 3
#define pi 3.1415921
struct circle //원 어쩌구를 저장할 구조체 정의
{
	int no;
	int xpos; //x좌표
	int ypos; //y좌표
	int r;  //반지름
};
double circle_area(struct circle s) {
	double wide; //넓이 
	wide = (s.r*s.r)*pi; //계산
	return wide; //반환

}
int main()
{
	struct circle arr[3] = { 
		{ 1, 3, 5, 6}, //초기화
		{ 2, 7, 8, 9}, //초기화
		{ 3, 4, 5, 6} //초기화
	}; //원의 세요소를 저장할 배열 arr정의 

	int i; //반복을 위한 변수 정의
	
	for (i = 0; i < size; i++) {
		printf("%d번째 원의 중심(%d,%d) 반지름:%d 넓이:%.2f\n", arr[i].no, arr[i].xpos, arr[i].ypos, arr[i].r, circle_area(arr[i]));
		
	}
	//struct circle을 저장하는 배열
	//struct circle의 반지름 요소를 입력

	//반복문을 통해입력받은 값을 출력
	return 0;

}