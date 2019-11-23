#include <stdio.h>

	int main(){
		int height = 0, spaces = 0;

		printf("Podaj wysokosc trojkata: ");
		scanf("%d", &height);

		if(height == 1){
			printf("%%\n");
		}else {
			for(int i =0; i < height; i++){
				spaces = height - i;
				printf("%*s", spaces, " ");
				for(int j = 0; j <=2*i; j++){
					printf("%%");
				}
				printf("\n");
			}

		}
		return 0;
	}
