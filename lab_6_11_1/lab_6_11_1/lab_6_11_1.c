/*
주제 구조체 연습
작성일 18 06 11
작성자 윤경환
*/
#include <stdio.h>
#include <string.h>





	struct score
	{
		int id; //변수 정의
		char name[50]; //이하동문
		int eng; //이하동문
		int kor; //이하동문
		int math; //이하동문
		


	};
	void score_output(struct score s) //이름 학번 영성 국성 수성 평점 출력하는 함수 정의
	{
		printf("이름:%s\n학번:%d\n영어성적:%d\n국어 성적:%d\n수학 성적:%d\n평균점수:%.1f\n\n", s.name, s.id, s.eng, s.kor, s.math, (double)(s.eng + s.kor + s.math) / 3);
		//출력
	}
	int main()
	{
		
		struct score k1 = { 201814099, "윤경환", 80, 90, 100 }; //구조체 변수 초기화
		struct score k2 = { 201814098, "김민석", 60, 40, 50 }; //이하동문
		struct score k3; //정의
		k3.id = 201814100; //학번 초기화
		strcpy(k3.name,"전홍영"); //문자열을 복사
		k3.eng = 80; //영성 초기화
		k3.kor = 80; //국성 초기화
		k3.math = 80; //수성 초기화
		score_output(k1); //함수 호출
		score_output(k2); //;
		score_output(k3); //;
		return 0; //반환

}



