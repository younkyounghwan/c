/*
����: ����ü ���� �ɹ�(number)�μ� ����ü ����
�ۼ��� 18 06 14
�ۼ��� ����ȯ
*/
#include <stdio.h>
#include "rectangle.h"
//��ǥ����� ���� ǥ��
/*
int which_one(int a, int b)
{
	if (a >= b) //����
		return a - b; //��ȯ
	else //����
		return b - a; //��ȯ
}
*/
int main()
{

	//�簢���� �ʱ�ȭ
	struct rectangle r; //����ü ����
	struct point pp1;
	struct point pp2;

	r.p1 = &pp1;
	r.p2 = &pp2;
	while (1) { //���� ����



		printf("ù��° �� �Է�:"); //���� ���
		scanf("%d %d", &pp1.xpos, &pp1.ypos); //��ǥ �Է�
		printf("�ι�° �� �Է�:"); //���� ���
		scanf("%d %d", &pp2.xpos, &pp2.ypos); //��ǥ �Է�

												//�簢���� �� ���� ���
												//printf("(%d, %d), (%d, %d)\n", r.p1.xpos, r.p1.ypos, r.p2.xpos, r.p2.ypos);
												//�簢���� �� ���� ���
		if (*(r.p1).xpos == *(r.p2).ypos || *(r.p1).ypos == *(r.p2).ypos) {


			printf("�� ���� �簢���� �̷� �� �����ϴ�.\n"); //���� ���

		}
		else { //����



			printf("(%d, %d), (%d, %d) (%d, %d), (%d, %d)\n", r.p1.xpos, r.p1.ypos, r.p1.xpos, r.p2.ypos, r.p2.xpos, r.p1.ypos, r.p2.xpos, r.p2.ypos); //��ǥ ���
			break; //������
		}
	}


	return 0;
}