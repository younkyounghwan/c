/*
주제 정수형 포인터 배열
작성일 18 06 05
작성자 윤경환
*/
#include <stdio.h>
int main()
{
	int*arr[3], i; //정수형포인터를 저장하는 배열 정의 및 반복할 변수 정의
	int a = 4; //a초기화
	int b = 9; //b초기화
	int c = 12; //c초기화
	arr[0] = &a; //arr의 첫번쨰 요소 초기화 
	arr[1] = &b; //arr의 두번째 요소 초기화
	arr[2] = &c; //arr의 세번째 요소 초기화
	for (i = 0; i < 3; i++) { //조건
		printf("arr[%d]=%d\n", i, *arr[i]); //출력
		
	}

}