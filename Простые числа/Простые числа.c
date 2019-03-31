#include < stdio.h >
#include < math.h >
int main()
{
	char ch;

	do {
		int n, booly;
		int temp = 1;
		printf("Input maximal number: ");
		scanf_s("%d", &n);

		while (temp <= n) {
			booly = 1;	//Переменная, отвечающая за количество делителей (Если делитель - только 1, то booly = 1. Если делитель отличен от 1, то booly = 0) 
			for (int i = 2; i*i <= temp; i++) {
				if (temp % i == 0) {	//Условие на делитель числа temp, отличный от 1
					booly = 0;
					break;
				}
			}
			if (booly) {
				printf("%d  ", temp);
			}
			temp++;
		}

		//Повтор программы
		printf("\nDo you wish to restart program? (y/n)\n");
		getchar();
		scanf_s("%c", &ch);
	} while (ch == 'y' || ch == 'Y');

	return 0;
}