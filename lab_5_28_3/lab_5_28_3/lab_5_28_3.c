/*
���� �迭
�ۼ��� 18 05 28
�ۼ��� ����ȯ
*/
#include <stdio.h>
int main()
{
	char a[] = "hello!"; //���ڿ������ʱ�ȭ
	int i; //���� ����
	int size = sizeof(a); //�ʱ�ȭ
	for (i = 0; i < size; i++) { //����

		printf("%c\n\n", a[i]); //���
	}
	printf("%s\n", a);
	printf("�迭�� ũ��:%d\n", sizeof(a)); //�迭��ũ�����
}