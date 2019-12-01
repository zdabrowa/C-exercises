#include <stdio.h>

	int main(){
		//int denom[3] = [20, 50, 100];
		// kwota = i * 100 + j * 50 + k * 20
		int amount = 0;
		int k = 0;
		
		printf("Podaj kwote ktora jest wielokrotnoscia 20, 50 lub 100: ");
		scanf("%d", &amount);

		if(amount%10 == 0 && amount >=20){
			for(int i =0; i <= amount/100; i++){
				for(int j = 0; j <= (amount - i * 100)/50; j++){
					k = (amount - i * 100 - j * 50)/20;
					if(amount == k *  20 + j * 50 + i *100 ){
						printf("%d * 100 + %d * 50 + %d * 20 = %d\n", i, j, k, amount);
					}
				}
			}

		
		}else{
			printf("Podano nieprawidlowa kwote>:( \n");
			return 0;
		}

	}
