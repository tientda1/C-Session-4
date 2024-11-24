#include<stdio.h>
int main(){
	int day,month,year;
	int valid = 1;
	int leapYear; 
	printf("Nhap ngay: ");
	scanf("%d",&day);
	printf("Nhap thang: ");
	scanf("%d",&month);
	printf("Nhap nam: ");
	scanf("%d",&year);
	 if(year<0){
	 	valid = 0; 
	 } else if(year%4==0){
	 	leapYear = 1; 
	 } else{
	 	leapYear = 0; 
	 } 
	 if(month<0||month>12){
	 	valid = 0; 
	 } 
	 if(valid==1){
	 	switch (month){
	 		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			 if(day<1||day>31){
			 	valid = 0;
				 break; 
			 } 
			case 4: case 6: case 9: case 11:
			 if(day<1||day>30){
			 	valid = 0;
				 break; 
			 } 
			case 2: 
			if(leapYear == 1){
				if(day<1||day>29){
					valid = 0;
					break; 
				} 
			} else if(leapYear == 0){
				if(day<1||day>28){
					valid = 0;
					break; 
				} 
			} 
		
		 } 
	 }

if(valid == 1){
	printf("Ngay thang nam nhap vao hop le"); 
} else{
	printf("Ngay thang nam nhap vao khong hop le"); 
} 
	 
 return 0; 
}
