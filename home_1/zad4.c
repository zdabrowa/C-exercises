#include <stdio.h>

	int main(){
		
		float num;
		printf("Podaj liczbe do sprawdzenia: \n");
		scanf("%f", &num);

		if((num - (int)num) == 0){
			printf("Podales liczbe calkowita\n");
			if((int)num%2 == 0){
				printf("Twoja liczba jest parzysta\n");
			}else{
				printf("Twoja liczba jest nieparzysta\n");
			}
		
		}else{
			printf("Podales liczbe niecalkowita\n");
		}
		

		return 0;
	}
