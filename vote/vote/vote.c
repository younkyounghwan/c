/*
주제: 투표시스탬 만들기
작성일 18 06 11
작성자 윤경환
프로그램명:vote.c
*/
#include <stdio.h>
double persent(int a,int b) //득표율을 계산할 함수 정의
{
	double x; //득표율을 저장할 변수
	x = (double)a / (double)b; //계산
	x *= 100; //계산
	return x; //반환

}
int main()

{
	int a[5]; //후보자 번호를 저장할 배열 정의
	int choice; //번호를 입력받을 변수 정의
	int i; //반복을 위한 변수
	int sum=0; //총 득표수를 저장할 변수
	
	for(i=0;i<5;i++){ //조건
		a[i] = 0; //후보자들의 득표수를 0으로 초기화
	}
	printf("1-5까지의 번호를 입력하여 투표하고, 종료를 원하면 0을 입력하시오\n\n"); //안내문 출력
	while (1) { //무한루프
		scanf("%d", &choice); //번호 입력
		switch (choice)  //입력된 번호에 표를 저장
		{
			
		case 0: //0입력
				break; //탈출

		case 1:	//1입력
				a[0]++; //증감연산자 사용
				break; //탈출

		case 2: //2입력
				a[1]++; //증감연산자 사용
				break; //탈출

		case 3: //3입력
				a[2]++; //증간연산자 사용
				break; //탈출

		case 4: //4입력
				a[3]++; //증간연산자 사용
				break; //탈출
		case 5: //5입력
				a[4]++; //증간연산자 사용
				break; //탈출

		default: //그 외의 값
				printf("1-5까지의 번호를 입력하여 투표하고, 종료를 원하면 0을 입력하시오\n\n");
				//안내문 출력
				break; //탈출
		}
		if (choice == 0) //0입력시
			break; //탈출

	}
	for (i = 0; i < 5; i++) { //조건
		sum += a[i]; //합에 득표수를 저장

	}
	printf("\n총득표 수:%d\n\n", sum); //총득표수 출력
	for (i = 0; i < 5; i++) { //조건
		printf("%d번 후보자 %d표 득표\n", i + 1, a[i]); //후보자 득표수 출력
		printf("%d번 후보자 득표율:%.1f퍼센트\n\n", i + 1, persent(a[i], sum)); //후보자 득표율 출력
	}
	
	return 0; //반환


}