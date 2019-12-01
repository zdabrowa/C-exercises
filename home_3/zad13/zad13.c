#include <stdio.h>

	 

	struct  date{
		int day;
		int month;
		int year;
	};

	int is_gregorian(int y){
		if(y >= 1528) return 1;
		else return 0;
	}


	int is_leap(int s, int y){ //s - czy gregorianski(1) czy julianski (0) - sprawdza rok przestepny	
		if(y % 4 == 0){
			if(s == 0){
				return 1;
			}else if(s ==1 && y % 100 == 0 && y % 400 != 0){
			 	return 0;
			}else{
				return 1;
			}
		}else{
			return 0;
		}
	}

	int is_valid(int d, int m ,int y, int s){

		if (m >= 1 && m <= 12){

			if(m == 2 && is_leap(s, y) ==1 && d <= 29){
        	                return 1;
                	}else if(m == 2 && d <= 28){
                        	return 1;
                	}else if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <=31){
				return 1;
			}else if((m ==4 || m==6 || m ==9 || m==11) && d <= 30){
				return 1;
			}else return 0;

		}else return 0;

	}

	int calculate_days(int d, int m, int y, int s){ //abc to jakies pomocnixze liczby - wzor jest z internetu
		int a = r/100
		if(m < 3){
			r = r-1;
			m = m + 12;
		} 
		

		if(s == 1){
			return int(365.25*(r+4716)+int(30.6001 * (m+1))+d + (2 - a + int(a/4));
		}else{
			return int(365.25*(r+4716)+int(30.6001 * (m+1))+d;
		}
	}



	int main(){
		struct date date1, date2;
		int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int g_or_j1 = 1;
		int g_or_j2 = 1; //dla date 1 i 2 musze to zrobic tu bo nie mozna tego dodac w struct
		int days1 = 0;
		int days2 = 0;
		int daysdiff = 0;

		printf("Podaj pierwsza date w formacie: DD/MM/YY\n");
		scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);
		printf("\nPodaj druga date w formacie: DD/MM/YY\n");
		scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

		g_or_j1 = is_gregorian(date1.year);
		g_or_j2 = is_gregorian(date2.year);

		if(is_valid(date1.day, date1.month, date1.year, g_or_j1) && is_valid(date2.day, date2.month,date2.year, g_or_j2)){
			days1 = calculate_days(date1.day, date1.month, date1.year, g_or_j1);
			days2 = calculate_days(date2.day, date2.month, date2.year, g_or_j2);
			daysdiff = days1 - days2;

			if(daysdiff < 0) daysdiff = daysdiff  * (-1);

			printf("%d", daysdiff);
			
			printf("%d   Fajen", days);
		}else printf("Niefajen");
		return 0;
	}
