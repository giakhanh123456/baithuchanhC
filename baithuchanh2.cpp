#include<stdio.h>

int main(){
	float phucap,mucluong,tongluong,sogio,luongcoban;
	printf("nhap muc luong theo gio: ");
	scanf("%f", &mucluong);
	printf("nhap so gio lam viec: ");
	scanf("%f", &sogio);
	luongcoban = mucluong * sogio;
	if(sogio > 160){
		phucap = luongcoban * 0.1;
		tongluong = luongcoban + phucap;
	}
	else{
	    tongluong = luongcoban;    
		}
	printf("luong co ban = %.2f\n", luongcoban);
	printf("phu cap = %.2f\n", phucap);
	printf("tong luong = %.2f\n", tongluong);
	return 0;
}
