/*
주제:영단어 출력및 뒤집어 출력하기
작성일 18 06 04
작성자 윤경환
*/
#include <stdio.h>
#define size 50 //macro
int main()
{
	char input[size], reverse[size]; //배열 정의
	int i, count=0; //변수초기화

	printf("영단어를 입력하시오:"); //문구 출력
	scanf("%s", input); //영단어 입력

	for (i = 0; input[i] != 0; i++) {//조건		
		count++; //증감연산자 사용
	}

	count--; //증감연산자 사용

	for (i = count; i >= 0; i--) { //조건
		reverse[i] = input[count-i]; //배열 초기화

	}

	printf("입력된 영단어:"); //문구 출력

	for (i = 0; i <= count; i++) { //조건
		printf("%c", input[i]); //영단어 출력
	}

	printf("\n뒤집은 영단어:"); //문구 출력

	for (i = 0; i <= count; i++) { //조건
		printf("%c", reverse[i]); //뒤집은 영단어 출력
		
	}

	printf("\n"); //뉴라인
	return 0; //반환
}