#include <stdio.h>
#include <string.h>
 	
	int main(){

		char my_string[100];
		size_t len = 0;
		int operator_index = 0;
		int num1;
		int num2;
		int multiplier = 10;
		int result;
		


		printf("Podaj wyrazenie do obliczenia:\n");
		scanf("%s", my_string);
		len = strlen(my_string);
		//printf("%s", &my-string);
		//printf("%d",len); 


		//wyciagniecie indeksu operatora
		for(int i =0; i < len; i++){
			if((my_string[i] == '+' || my_string[i] == '-' || my_string[i] == '*' || my_string[i] == '/')){
				operator_index = i;
			}
		}

		//printf("%d\n", operator_index);

		//sklejenie liczby 1
		for(int i = operator_index-1; i >= 0; i--){
			if(i == operator_index-1){
				num1 = my_string[i]-48 ;
			}else{
				num1 += (my_string[i]-48) * multiplier;
				multiplier *= 10;
			}
		
		}

		multiplier =10; //trzeba go zresetowac

		//sklejenie liczby 2
		for(int i = len-1; i >= operator_index+1; i--){
			if(i == len -1){
				num2 = my_string[i] - 48;
			}else{
				num2 += (my_string[i]-48) * multiplier;
				multiplier *=10;
			}
		}

		//printf("%d", num1);
		//printf("%d", num2);

		switch(my_string[operator_index]){
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


		printf("\n%d\n", result);

		return 0;
	}
