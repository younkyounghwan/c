/*
주제 배열
작성일 18 05 28
작성자 윤경환
*/
#include <stdio.h>
int main()
{
	char a[] = "hello!"; //문자열으로초기화
	int i; //변수 정의
	int size = sizeof(a); //초기화
	for (i = 0; i < size; i++) { //조건

		printf("%c\n\n", a[i]); //출력
	}
	printf("%s\n", a);
	printf("배열의 크기:%d\n", sizeof(a)); //배열의크기출력
}