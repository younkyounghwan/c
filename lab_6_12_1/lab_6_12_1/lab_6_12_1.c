/*
����: �� ����ü �迭 ����
�ۼ��� 18 06 12
�ۼ��� ����ȯ

*/
#include <stdio.h>
#define size 3
#define pi 3.1415921
struct circle //�� ��¼���� ������ ����ü ����
{
	int no;
	int xpos; //x��ǥ
	int ypos; //y��ǥ
	int r;  //������
};
double circle_area(struct circle s) {
	double wide; //���� 
	wide = (s.r*s.r)*pi; //���
	return wide; //��ȯ

}
int main()
{
	struct circle arr[3] = { 
		{ 1, 3, 5, 6}, //�ʱ�ȭ
		{ 2, 7, 8, 9}, //�ʱ�ȭ
		{ 3, 4, 5, 6} //�ʱ�ȭ
	}; //���� ����Ҹ� ������ �迭 arr���� 

	int i; //�ݺ��� ���� ���� ����
	
	for (i = 0; i < size; i++) {
		printf("%d��° ���� �߽�(%d,%d) ������:%d ����:%.2f\n", arr[i].no, arr[i].xpos, arr[i].ypos, arr[i].r, circle_area(arr[i]));
		
	}
	//struct circle�� �����ϴ� �迭
	//struct circle�� ������ ��Ҹ� �Է�

	//�ݺ����� �����Է¹��� ���� ���
	return 0;

}