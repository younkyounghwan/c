
/*
����: ����ܾ  �Է¹޾� �پ��� ������� ����ϱ�
�ۼ��� 18 05 29
�ۼ��� ����ȯ

*/
#include <stdio.h>
#define size 50 //macro
int count = 0; //�ܾ��� ���̸� ������ ���� ����
int str_len(char a[size]) //�ܾ��� ���̸� ����� �Լ� ����
{
	int i; //��������
	for (i = 0; a[i] != '\0'; i++) //����
		count++; //���������� ���
	return count; //��ȯ

}
int main()
{
	char a[size]; //���� ����
	int i; //���� ����
	printf("���ܾ� �Է�:"); //�������
	scanf("%s", a); //���ܾ� �Է�
	printf("���ܾ� ���:%s\n", a); //���ܾ� ���
	printf("���ܾ� ����:\n"); //���ܾ� ���� ���

	for (i = 0;a[i]!='\0' ; i++) { //���� + null����
		printf("%c\n", a[i]); //���� ���
		

	}
	printf("�ܾ��� ����:%d\n", str_len(a)); //�ܾ��� ���� ���
	return 0;
}