/*
주제: 합과 평균구하기 배열사용
작성일 18 05 28
작성자 윤경환
*/
#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 }; //배열을 이용한 변수 정의
	int sum = 0; //합 초기화
	int aver; //평균 초기화
	int b; //반복을 위한 변수
	
	for(b=0;b<sizeof(a)/4;b++){ //조건
		sum += a[b]; //계산
	}
	aver = sum / (sizeof(a)/4); //평균 초기화
	printf("합:%d\n", sum); //합 출력
	printf("평균:%d\n", aver); //평균 출력
	return 0; //반환
}