#include <stdio.h>
int main(){
	int number;
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d",&number);
	if(number%2==0){
		printf("Day la so chan");
	}else{
		printf("Day la so le");
	}
	return 0;
}
