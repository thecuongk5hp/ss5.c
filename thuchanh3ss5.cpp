#include <stdio.h>
int main(){
	float sophut,tien;
	printf("nhap so phut goi trong thang:");
	scanf("%f",&sophut);
	if(sophut<=50){
		tien=sophut*600;
	}else if(sophut<=150&&sophut>50){
		tien=(sophut-50)*400+600*50;
	}else if(sophut<=200&&sophut>150){
		tien=(sophut-150)*200+600*50+400*100;
	}
	printf("so tien phai tra la:%.2f",tien+25000);
		
	
}
