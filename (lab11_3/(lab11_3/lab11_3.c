/*
����:���� �м��ϱ�
�ۼ��� 18 05 28
�ۼ���: ����ȯ
*/
#include <stdio.h>

int main()
{
	int score[10] = { 45,79,32,46,77,55,45,100,91,20 }; //���� �ʱ�ȭ
	int sum = 0; //���� ������ ����
	int aver, i; //����� ������ ����
	int count = 0; //����̻� �л���
	int size = sizeof(score) / 4; //�ʱ�ȭ
	for (i = 0; i < size; i++) { //����
		sum += score[i]; //���
	}
	aver = sum / size; //��� �ʱ�ȭ
	for (i = 0; i < size; i++) { //����
		if (score[i] >= aver) //����
			count++; //����̻� �л��� ����
	}
	printf("����:"); //���� ���
	for (i = 0; i < size; i++) { //����
		printf("%d ", score[i]); //���� ���

	}
	printf("\n"); //������
	printf("���:%d\n", aver); //���
	printf("����̻� �ο�:%d\n", count); //����̻� �л���
	return 0;
}