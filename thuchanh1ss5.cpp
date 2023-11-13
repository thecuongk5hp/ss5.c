#include<stdio.h>
#include <math.h>
int main (){
	double a,b,c,x1,x2;
	printf("nhap a,b,c tuong duong ax*x+bx+c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	if (a==0){
	printf("day la phuong trinh bac 1");
	}else {
		double dt=b*b-4*a*c;
		if (dt<0){
			printf("phuong trinh vo nghien");
		}else if (dt==0){
			x1=-b/a;
			printf("x1=x2=%f",x1);
		}else if(dt>0){
			x1=(-b-sqrt(dt))/(2*a);
			x2=(-b+sqrt(dt))/(2*a);
			printf("x1=%f\n",x1);
			printf("x2=%f",x2);
		}
	}
	
}
