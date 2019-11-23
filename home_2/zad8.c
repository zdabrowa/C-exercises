#include <stdio.h>

	int main(){
		int height;
		int width;

		printf("Podaj szerokosc i wysokosc prostokata oddzielone spacja :)" );

		scanf("%d%d", &width, &height);

		for(int i =0; i < height; i++){
			printf("%%");

			for(int j = 0; j < width-2; j++){
				if(i ==0 && (j!=width-2 || j!=0)){
					printf("%%");
				}else if(i == height-1 && (j!=width-2 || j!=0)){
					printf("%%");
				}else{
					printf(" ");
				}
			}
			printf("%%\n");
		}

		return 0;
	}
