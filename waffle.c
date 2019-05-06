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
		printf("어서오세요~ 딩구리 와플가게 입니다 ^ㅡㅡㅡ^\n");
		printf("와플을 주문하시겠습니다? (y 또는 n) ");
		scanf(" %c", &want);

		if (want == 'y') {
			printf("------------------------------------------------------------------ㅡㅡㅡㅡㅡㅡㅡㅡㅡ-\n");
			printf("  1.딸기  2.초코  3.밀크  4.멜론  5.체리  6.모카  7.자두  8.망고  9.치즈  10.사과\n");
			printf("-------------------------------------------------------------------ㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

			for (i = 0; i < 10; i++) {
				printf("       %d", cream[i]);
			}
			printf("\n");

			while (1) {
				printf("무슨 와플을 주문하시겠습니까? (번호로 한 개씩 입력)");
				scanf("%d", &cream_choice);

				if (cream_choice >= 1 && cream_choice <= 10) {
					if (cream[cream_choice - 1] == 0) {
						cream[cream_choice - 1] = 1;
						printf("주문되었습니다.\n");
						break;
					}
					else {
						printf("-----딩구리 와플가게-----다시 주문해주세요.-----\n");
						break;
					}
				}
				else {
					printf("잘못된 주문입니다.\n");
				}
			}
		}
		else if (want == 'n') {
			printf("방문해주셔서 감사합니다. 다음 번에 또 방문해주세요 ^ㅡㅡ^\n");
			break;
		}
		else {
			printf("y 또는 n을 입력해주세요.\n");
		}
	} return 0;
}