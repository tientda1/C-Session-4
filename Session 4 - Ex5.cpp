#include<stdio.h>
int main(){
	int firstNumber, secondNumber, thirdNumber;
	printf("Nhap vao so nguyen thu nhat:");
	scanf("%d", &firstNumber);
	printf("Nhap vao so nguyen thu hai:");
	scanf("%d", &secondNumber);
	printf("Nhap vao so nguyen thu ba:");
	scanf("%d", &thirdNumber);
	if(firstNumber<thirdNumber&&thirdNumber<secondNumber){
		printf("So thu 3 nam giua so thu nhat va so thu hai");
	}else if(firstNumber>thirdNumber&&thirdNumber>secondNumber){
		printf("So thu 3 nam giua so thu nhat va so thu hai");
	}else{
		printf("So thu 3 khong nam giua so thu nhat va so thu hai");
	}
}
