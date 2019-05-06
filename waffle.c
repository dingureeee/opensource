#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	char want, drinks;
	int cream[10] = { 0 };
	int i, cream_choice;

	while (1) {
		printf("¿¿¿¿¿~ ¿¿¿ ¿¿¿¿ ¿¿¿ ^¿¿¿^\n");
		printf("¿¿¿ ¿¿¿¿¿¿¿¿? (y ¿¿ n) ");
		scanf(" %c", &want);

		if (want == 'y') {
			printf("------------------------------------------------------------------¿¿¿¿¿¿¿¿¿-\n");
			printf("  1.¿¿  2.¿¿  3.¿¿  4.¿¿  5.¿¿  6.¿¿  7.¿¿  8.¿¿  9.¿¿  10.¿¿\n");
			printf("-------------------------------------------------------------------¿¿¿¿¿¿¿¿¿\n");

			for (i = 0; i < 10; i++) {
				printf("       %d", cream[i]);
			}
			printf("\n");

			while (1) {
				printf("¿¿ ¿¿¿ ¿¿¿¿¿¿¿¿? (¿¿¿ ¿ ¿¿ ¿¿)");
				scanf("%d", &cream_choice);

				if (cream_choice >= 1 && cream_choice <= 10) {
					if (cream[cream_choice - 1] == 0) {
						cream[cream_choice - 1] = 1;
						printf("¿¿¿¿¿¿¿.\n");
						printf("¿¿ ¿¿¿ ¿¿¿¿¿¿¿¿? (¿¿¿ ¿¿) 1.¿¿¿¿¿ 2.¿¿¿¿ 3.¿¿¿¿ 4.¿¿¿   ");
						scanf("%d", &drinks);
						switch (drinks) {
						case(1):
							printf("¿¿¿¿¿ ¿¿¿¿¿¿¿.\n");
							break;
						case(2):
							printf("¿¿¿¿ ¿¿¿¿¿¿¿.\n");
							break;
						case(3):
							printf("¿¿¿¿ ¿¿¿¿¿¿¿.\n");
							break;
						case(4):
							printf("¿¿¿¿¿.\n");
							break;
						}
						break;
					}
					else {
						printf("-----¿¿¿ ¿¿¿¿-----¿¿ ¿¿¿¿¿¿.-----\n");
						break;
					}
				}
				else {
					printf("¿¿¿ ¿¿¿¿¿.\n");
					printf("¿¿¿ ¿¿¿¿¿¿.\n");
				}
			}
		}
		else if (want == 'n') {
			printf("¿¿ ¿¿¿ ¿¿¿¿¿¿¿¿? (¿¿¿ ¿¿) 1.¿¿¿¿¿ 2.¿¿¿¿ 3.¿¿¿¿ 4.¿¿¿   ");
			scanf("%d", &drinks);
			switch (drinks) {
			case(1):
				printf("¿¿¿¿¿ ¿¿¿¿¿¿¿.\n");
				break;
			case(2):
				printf("¿¿¿¿ ¿¿¿¿¿¿¿.\n");
				break;
			case(3):
				printf("¿¿¿¿ ¿¿¿¿¿¿¿.\n");
				break;
			case(4):
				printf("¿¿¿¿¿.\n");
				break;
			}
		}
		else {
			printf("y ¿¿ n¿ ¿¿¿¿¿¿.\n");
		}
		printf("¿¿¿¿¿¿ ¿¿¿¿¿. ¿¿ ¿¿ ¿ ¿¿¿¿¿¿ ^¿¿^\n\n\n\n");

	} return 0;
}
