#include <stdio.h>

	int main(){

		char character;

		printf("Hej! Podaj mi jakis dowolny znak, a powiem Ci jaki to nr w ASCII\n");
		scanf("%c", &character);
		printf("%d\n", (int)character);

		return 0;
	}
