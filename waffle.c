#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 1024

int main(void)
{
	char want;
	int cream[10] = { 0 };
	int i, cream_choice;

	while (1) {
		printf("�������~ ������ ���ð��� �Դϴ� ^�ѤѤ�^\n");
		printf("������ �ֹ��Ͻðڽ��ϴ�? (y �Ǵ� n) ");
		scanf(" %c", &want);

		if (want == 'y') {
			printf("------------------------------------------------------------------�ѤѤѤѤѤѤѤѤ�-\n");
			printf("  1.����  2.����  3.��ũ  4.���  5.ü��  6.��ī  7.�ڵ�  8.����  9.ġ��  10.���\n");
			printf("-------------------------------------------------------------------�ѤѤѤѤѤѤѤѤ�\n");

			for (i = 0; i < 10; i++) {
				printf("       %d", cream[i]);
			}
			printf("\n");

			while (1) {
				printf("���� ������ �ֹ��Ͻðڽ��ϱ�? (��ȣ�� �� ���� �Է�)");
				scanf("%d", &cream_choice);

				if (cream_choice >= 1 && cream_choice <= 10) {
					if (cream[cream_choice - 1] == 0) {
						cream[cream_choice - 1] = 1;
						printf("�ֹ��Ǿ����ϴ�.\n");
						break;
					}
					else {
						printf("-----������ ���ð���-----�ٽ� �ֹ����ּ���.-----\n");
						break;
					}
				}
				else {
					printf("�߸��� �ֹ��Դϴ�.\n");
				}
			}
		}
		else if (want == 'n') {
			printf("�湮���ּż� �����մϴ�. ���� ���� �� �湮���ּ��� ^�Ѥ�^\n");
			break;
		}
		else {
			printf("y �Ǵ� n�� �Է����ּ���.\n");
		}
	} return 0;
}