
/*
주제:포인터의 활용
작성일 18 05 31
작성자 윤경환
*/
#include <stdio.h>
main()
{
	double d[] = { 3,4,5 }; //d의 배열 초기화
	double *dp; //포인터변수 정의
	dp = d; //포인터변수 초기화
	printf("dp의 값:%x\n", dp); //d의 주소, 즉 dp의 값을 16진수로 출력
	printf("dp가 가리키고 있는 곳의 값:%.1f\n", *dp); //d[0]의 값 출력
	*dp += 10; //증감연산자 사용
	printf("dp가 가리키고 있는 곳의 값:%.1f\n", *dp); //d[0]+10값 출력
	return 0; //반환

	
}