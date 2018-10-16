/*
주제: 대문자영단어 소문자로 출력하기
작성일 18 06 04
작성자 윤경환
*/
#include <stdio.h>
int main()
{
	char input[50], small[50]; //배열정의
	int i, diff, count = 0; //변수 정의
	printf("영단어를 입력하시오:"); //문구 출력
	scanf("%s", input); //입력
	
	diff = 'a' - 'A'; //diff정의

	for (i = 0; input[i] != 0; i++) { //조건
		small[i] = input[i]; //small 초기화
		if (input[i] >= 'A'&&input[i] <= 'Z') //조건
			
			small[i] += diff;  //계산
		count++; //증감연산자 사용
	}
	
	small[count] = 0; //null 넣어주기
	printf("소문자 단어:"); //문구 출력
	printf("%s", small); //소문자 단어 출력
	
	printf("\n"); //뉴라인
	return 0; //반환
}