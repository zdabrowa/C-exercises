#include <stdio.h>

	int main(){
		double a=0;
		double b=0;
		
		printf("Podaj liczby do porownania oddzielone spacja\n");
		scanf("%lf%lf", &a, &b);

		//printf("%lf", a);
		//printf("%lf", b);
		
		if(a > b){
			printf("\nLiczba wieksza to: %.2lf\n", a);
		}else if(a == b){
			printf("\nPodane liczby sa rowne\n");
		}else if(a < b){
			printf("\nLiczba wieksza to: %.2lf\n", b);
		}else{
			printf("\nCos poszlo nie tak ;/");
		}
		return 0;
	}
