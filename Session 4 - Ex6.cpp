#include<stdio.h>
int main(){
	float cost;
	int eletricNumber;
	printf("Nhap vao so dien ma ban da dung: ");
	scanf("%d", &eletricNumber);
	if (0<=eletricNumber&&eletricNumber<50){
		cost = 10.000*eletricNumber;
		printf("Tien dien cua ban la: %.3f", cost);
	}else if(50<=eletricNumber&&eletricNumber<100){
		cost=490.000+(eletricNumber-50+1)*15.000;
		printf("Tien dien cua ban la: %.3f", cost);
	}else if(100<=eletricNumber&&eletricNumber<150){
		cost=1240000+(eletricNumber-100+1)*20.000;
		printf("Tien dien cua ban la: %.3f", cost);
	}else if(150<=eletricNumber&&eletricNumber<200){
		cost=2240000+(eletricNumber-150+1)*25.000;
		printf("Tien dien cua ban la: %.3f", cost);
	}else{
		cost=3490000+(eletricNumber-200+1)*30.000;
		printf("Tien dien cua ban la: %.3f", cost);
	}
	
	return 0;
}
