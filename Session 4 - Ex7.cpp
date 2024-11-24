#include<stdio.h>
int main(){
	int year;
	printf("Nhap vao so nam: ");
	scanf("%d", &year);
	if((year%4==0&&year%100!=0)||(year%400==0)){
		printf("Nam nay la nam nhuan");
	}else{
		printf("Nam nay khong phai la nam nhuan");
	}
	
	return 0;
}
