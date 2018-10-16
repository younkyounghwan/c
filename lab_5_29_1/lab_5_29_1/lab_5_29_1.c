
/*
주제: 영어단어를  입력받아 다양한 방법으로 출력하기
작성일 18 05 29
작성자 윤경환

*/
#include <stdio.h>
#define size 50 //macro
int count = 0; //단어의 길이를 저장할 변수 정의
int str_len(char a[size]) //단어의 길이를 계산한 함수 정의
{
	int i; //변수정의
	for (i = 0; a[i] != '\0'; i++) //조건
		count++; //증간연산자 사용
	return count; //반환

}
int main()
{
	char a[size]; //변수 정의
	int i; //변수 정의
	printf("영단어 입력:"); //문구출력
	scanf("%s", a); //영단어 입력
	printf("영단어 출력:%s\n", a); //영단어 출력
	printf("영단어 문자:\n"); //영단어 문자 출력

	for (i = 0;a[i]!='\0' ; i++) { //조건 + null문자
		printf("%c\n", a[i]); //문자 출력
		

	}
	printf("단어의 길이:%d\n", str_len(a)); //단어의 길이 출력
	return 0;
}