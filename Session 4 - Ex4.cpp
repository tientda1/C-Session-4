#include<stdio.h>
int main(){
	int month;
	printf("Nhap vao so thang: ");
	scanf("%d",&month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang co 31 ngay");
			break;
		case 2:
			printf("Thang 2 co 28 hoac 29 ngay");
			break;
		case 4: case 6: case 9:
			printf("Thang co 30 ngay");
			break;
		default:
			printf("So thang khong hop le");
	}
	return 0;
}
