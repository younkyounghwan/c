/*
주제: 학생의 정보를 저장하는 구조체 student를 정의하라
작성일 18 06 07
작성자 윤경환
*/
#include <stdio.h>
int main()
{
	struct student // 구조체 정의 
	{
		int id; //학번
		char name[30]; //이름
		double gpa; //학점

	};
	struct student s1 = { 201814099,"윤경환",3.7 }; //학번 이름 학점 초기화

	printf("학생정보:%d\n",s1.id); //학번 출력
	printf("학생이름:%s\n",s1.name); //이름 출력
	printf("학점:%.1f\n", s1.gpa); //학점 출력
	return 0;
}

