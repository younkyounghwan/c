/*
����: ����ü ���� ����
�ۼ��� 18 06 07
�ۼ��� ����ȯ
*/
#include <stdio.h>
#include <math.h>
double sqrt(double x);


int main()
{
	//postion�̶�� ����ü Ÿ���� �����Ѵ�.
	//�޸� ������ �������� �ʴ´�.
	struct postion {

		int xpos;
		int ypos;
	};
	
	struct postion p1, p2; //���� �����͸� ������ ������ �Ҵ�ȴ�.
	printf("p1�� ��ǥ �Է�:");
	scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("p2�� ��ǥ �Է�:");
	scanf("%d %d", &p2.xpos, &p2.ypos);
	//��ǥ �ٷ�

	printf("p1�� ��ǥ (%d,%d)\n", p1.xpos, p1.ypos);
	printf("p2�� ��ǥ (%d,%d)\n", p2.xpos, p2.ypos);
	printf("���������� �Ÿ�:%.2f", sqrt((p1.xpos - p2.xpos)*(p1.xpos - p2.xpos) + (p1.ypos - p2.ypos)*(p1.ypos - p2.ypos)));
	return 0;
}