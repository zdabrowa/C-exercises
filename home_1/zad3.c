#include <stdio.h>

	int main(){
		
		double celcius, fahrenheit;

		printf("Podaj temperature w stopniach celsjusza: \n");
		scanf("%lf", &celcius);
		fahrenheit = (celcius * 9.0/5) +32;
		printf("%.2lf C to %.2lf F\n", celcius, fahrenheit);
			
		return 0;
	}
