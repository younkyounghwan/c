/*
����: �빮�ڿ��ܾ� �ҹ��ڷ� ����ϱ�
�ۼ��� 18 06 04
�ۼ��� ����ȯ
*/
#include <stdio.h>
int main()
{
	char input[50], small[50]; //�迭����
	int i, diff, count = 0; //���� ����
	printf("���ܾ �Է��Ͻÿ�:"); //���� ���
	scanf("%s", input); //�Է�
	
	diff = 'a' - 'A'; //diff����

	for (i = 0; input[i] != 0; i++) { //����
		small[i] = input[i]; //small �ʱ�ȭ
		if (input[i] >= 'A'&&input[i] <= 'Z') //����
			
			small[i] += diff;  //���
		count++; //���������� ���
	}
	
	small[count] = 0; //null �־��ֱ�
	printf("�ҹ��� �ܾ�:"); //���� ���
	printf("%s", small); //�ҹ��� �ܾ� ���
	
	printf("\n"); //������
	return 0; //��ȯ
}