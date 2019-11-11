#include <stdio.h>
 	
	int main(){
		float num1;
		float num2;
		float result;
		char operat;

		printf("Podaj wyrazenie do obliczenia: \n");
		scanf("%f%c%f", &num1, &operat, &num2);
		//printf("%c" , operat);
		
		switch(operat){
			case '+':
			result = num1 + num2;
			break;
			case '-':
			result = num1 - num2;
			break;
			case '*':
			result = num1 * num2;
			break;
			case '/':
			result = num1 / num2;
			break;			


		}

		printf("Wynik: %.2f\n", result);

		return 0;
	}
