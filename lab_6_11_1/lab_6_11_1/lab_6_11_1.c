/*
���� ����ü ����
�ۼ��� 18 06 11
�ۼ��� ����ȯ
*/
#include <stdio.h>
#include <string.h>





	struct score
	{
		int id; //���� ����
		char name[50]; //���ϵ���
		int eng; //���ϵ���
		int kor; //���ϵ���
		int math; //���ϵ���
		


	};
	void score_output(struct score s) //�̸� �й� ���� ���� ���� ���� ����ϴ� �Լ� ����
	{
		printf("�̸�:%s\n�й�:%d\n�����:%d\n���� ����:%d\n���� ����:%d\n�������:%.1f\n\n", s.name, s.id, s.eng, s.kor, s.math, (double)(s.eng + s.kor + s.math) / 3);
		//���
	}
	int main()
	{
		
		struct score k1 = { 201814099, "����ȯ", 80, 90, 100 }; //����ü ���� �ʱ�ȭ
		struct score k2 = { 201814098, "��μ�", 60, 40, 50 }; //���ϵ���
		struct score k3; //����
		k3.id = 201814100; //�й� �ʱ�ȭ
		strcpy(k3.name,"��ȫ��"); //���ڿ��� ����
		k3.eng = 80; //���� �ʱ�ȭ
		k3.kor = 80; //���� �ʱ�ȭ
		k3.math = 80; //���� �ʱ�ȭ
		score_output(k1); //�Լ� ȣ��
		score_output(k2); //;
		score_output(k3); //;
		return 0; //��ȯ

}



