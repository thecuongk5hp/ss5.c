#include <stdio.h>
int main(){
	float tongthu,hoahong;
	printf("nhap tong thu nhap tinh theo tram trieu:");
	scanf("%f",&tongthu);
	if(tongthu<=100){
	hoahong=tongthu/100*5;
	printf("hoa hong la:%.1f",hoahong);
	}else if(tongthu<=300&&tongthu>=100){
	hoahong=tongthu/100*10;
	printf("hoa hong la:%.1f",hoahong);
    }else if(tongthu>=300){
	hoahong=tongthu/100*20;
	printf("hoa hong la:%.1f",hoahong);
 }
 return 0;
}
