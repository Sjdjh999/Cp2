#include <stdio.h>

int main (void) {
	int temp;  //���� �Է� ���� 
	int ch_temp;  // ���� >> ȭ�� ��ȯ���� 
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d",&temp);
	
	ch_temp = (temp * 9/5) + 32;
	printf("����: %d, ȭ��: %d",temp, ch_temp);
	return 0;
	
}
