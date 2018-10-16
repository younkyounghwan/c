/*
주제:성적 분석하기
작성일 18 05 28
작성자: 윤경환
*/
#include <stdio.h>

int main()
{
	int score[10] = { 45,79,32,46,77,55,45,100,91,20 }; //점수 초기화
	int sum = 0; //합을 저장할 변수
	int aver, i; //평균을 저장할 변수
	int count = 0; //평균이상 학생수
	int size = sizeof(score) / 4; //초기화
	for (i = 0; i < size; i++) { //조건
		sum += score[i]; //계산
	}
	aver = sum / size; //평균 초기화
	for (i = 0; i < size; i++) { //조건
		if (score[i] >= aver) //조건
			count++; //평균이상 학생수 세기
	}
	printf("성적:"); //문구 출력
	for (i = 0; i < size; i++) { //조건
		printf("%d ", score[i]); //성적 출력

	}
	printf("\n"); //뉴라인
	printf("평균:%d\n", aver); //평균
	printf("평균이상 인원:%d\n", count); //평균이상 학생수
	return 0;
}