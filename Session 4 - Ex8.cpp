#include<stdio.h>
int main(){
	int side1, side2, side3;
	printf("Nhap vao canh thu nhat: ");
	scanf("%d", &side1);
	printf("Nhap vao canh thu hai: ");
	scanf("%d", &side2);
	printf("Nhap vao canh thu ba: ");
	scanf("%d", &side3);
	if((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1)){
		printf("3 canh nay se tao thanh 1 tam giac");
	}else{
		printf("3 canh nay khong tao thanh tam giac");
	}
}
