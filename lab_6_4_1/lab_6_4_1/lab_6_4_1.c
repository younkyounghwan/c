/*
����:���ܾ� ��¹� ������ ����ϱ�
�ۼ��� 18 06 04
�ۼ��� ����ȯ
*/
#include <stdio.h>
#define size 50 //macro
int main()
{
	char input[size], reverse[size]; //�迭 ����
	int i, count=0; //�����ʱ�ȭ

	printf("���ܾ �Է��Ͻÿ�:"); //���� ���
	scanf("%s", input); //���ܾ� �Է�

	for (i = 0; input[i] != 0; i++) {//����		
		count++; //���������� ���
	}

	count--; //���������� ���

	for (i = count; i >= 0; i--) { //����
		reverse[i] = input[count-i]; //�迭 �ʱ�ȭ

	}

	printf("�Էµ� ���ܾ�:"); //���� ���

	for (i = 0; i <= count; i++) { //����
		printf("%c", input[i]); //���ܾ� ���
	}

	printf("\n������ ���ܾ�:"); //���� ���

	for (i = 0; i <= count; i++) { //����
		printf("%c", reverse[i]); //������ ���ܾ� ���
		
	}

	printf("\n"); //������
	return 0; //��ȯ
}