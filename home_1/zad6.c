#include <stdio.h>

	int main(){
		int a;
		int b;
		int c;
		int d;
		int result;

		printf("Podaj 4  liczby calkowite z zakresu 0-9999 oddzielone spacja\n");
		scanf("%d%d%d%d", &a, &b, &c, &d);
		result = a + b + c + d;

		printf("%5d\n%5d\n%5d\n%5d\n", a, b, c, d);
		printf("-----\n");
		printf("%5d\n", result);


		return 0;
	}
