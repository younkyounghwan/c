/*
����: �հ� ��ձ��ϱ� �迭���
�ۼ��� 18 05 28
�ۼ��� ����ȯ
*/
#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 }; //�迭�� �̿��� ���� ����
	int sum = 0; //�� �ʱ�ȭ
	int aver; //��� �ʱ�ȭ
	int b; //�ݺ��� ���� ����
	
	for(b=0;b<sizeof(a)/4;b++){ //����
		sum += a[b]; //���
	}
	aver = sum / (sizeof(a)/4); //��� �ʱ�ȭ
	printf("��:%d\n", sum); //�� ���
	printf("���:%d\n", aver); //��� ���
	return 0; //��ȯ
}