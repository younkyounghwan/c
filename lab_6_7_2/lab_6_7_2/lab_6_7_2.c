/*
����: �л��� ������ �����ϴ� ����ü student�� �����϶�
�ۼ��� 18 06 07
�ۼ��� ����ȯ
*/
#include <stdio.h>
int main()
{
	struct student // ����ü ���� 
	{
		int id; //�й�
		char name[30]; //�̸�
		double gpa; //����

	};
	struct student s1 = { 201814099,"����ȯ",3.7 }; //�й� �̸� ���� �ʱ�ȭ

	printf("�л�����:%d\n",s1.id); //�й� ���
	printf("�л��̸�:%s\n",s1.name); //�̸� ���
	printf("����:%.1f\n", s1.gpa); //���� ���
	return 0;
}

