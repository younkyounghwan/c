/*
����: ����ü ���� �ɹ�(number)�μ� ����ü ����
�ۼ��� 18 06 14
�ۼ��� ����ȯ
*/
#include <stdio.h>
//��ǥ����� ���� ǥ��
struct point
{
	int xpos; //x��ǥ
	int ypos; //y��ǥ

};
struct rectangle
{
	struct point p1; //p1 ��ǥ
	struct point p2; //p2 ��ǥ

};
int which_one(int a,int b)
{
	if (a >= b) //����
		return a - b; //��ȯ
	else //����
		return b - a; //��ȯ
}
int main()
{
	
	//�簢���� �ʱ�ȭ
	struct rectangle r; //����ü ����
	while (1) { //���� ����



		printf("ù��° �� �Է�:"); //���� ���
		scanf("%d %d", &r.p1.xpos, &r.p1.ypos); //��ǥ �Է�
		printf("�ι�° �� �Է�:"); //���� ���
		scanf("%d %d", &r.p2.xpos, &r.p2.ypos); //��ǥ �Է�

		//�簢���� �� ���� ���
		//printf("(%d, %d), (%d, %d)\n", r.p1.xpos, r.p1.ypos, r.p2.xpos, r.p2.ypos);
		//�簢���� �� ���� ���
		if (r.p1.xpos == r.p2.ypos || r.p1.ypos == r.p2.ypos) {


			printf("�� ���� �簢���� �̷� �� �����ϴ�.\n"); //���� ���
			
		}
		else { //����



			printf("(%d, %d), (%d, %d) (%d, %d), (%d, %d)\n", r.p1.xpos, r.p1.ypos, r.p1.xpos, r.p2.ypos, r.p2.xpos, r.p1.ypos, r.p2.xpos, r.p2.ypos); //��ǥ ���
			break; //������
		}
	}

		
	return 0;
}