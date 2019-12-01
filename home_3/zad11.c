#include <stdio.h>

	void funkcja(){
		static int counter = 1;
		counter++;
		printf("Wywolano mnie %d razy.\n", counter);
	}

	int main(){
		for(int i = 0; i < 5; i++){
			funkcja();
		}

		return 0;
	}
