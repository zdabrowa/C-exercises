#include <stdio.h>

	int fibbonaci(int number){
		if(number <= 2){
			return 1;
		}else{
			return (fibbonaci(number -2)+fibbonaci(number-1)); 
		}
	}

	int main(){
		int n;

		printf("Podaj numer wyrazu w ciagu: ");
		scanf("%d", &n);

		if(n < 1){
			printf("taki wyraz ciagu nie istnieje!\n");
		}else{
			printf("%d%s", fibbonaci(n), "\n");
		}

		return 0;
	}
