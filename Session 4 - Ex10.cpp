#include<stdio.h> 
int main(){ 
	int firstNumber,secondNumber,thirdNumber,k;
	printf("Nhap so thu nhat: ");
	scanf("%d",&firstNumber);
	printf("Nhap so thu hai: ");
	scanf("%d",&secondNumber);
	printf("Nhap so thu ba: ");
	scanf("%d",&thirdNumber);

	if (firstNumber>secondNumber){
		k = firstNumber; 
		firstNumber = secondNumber; 
		secondNumber = k; 
	} 

	if (firstNumber>thirdNumber){
		k = firstNumber;
		firstNumber =  thirdNumber;
		thirdNumber = k; 
	} 

	if (thirdNumber<secondNumber){
		k = secondNumber;
		secondNumber =  thirdNumber;
		thirdNumber = k; 
	} 

	printf("Thu tu sap xep theo tu nho den lon la: %d %d %d",firstNumber,secondNumber,thirdNumber); 
	
	return 0; 
} 
