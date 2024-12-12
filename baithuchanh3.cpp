#include<stdio.h>

int main(){
	int donvi;
	float sotien, sotienchuyen;
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n");
	printf("Nhap don vi tien te ban muon chuyen doi (1-8)? ");
	scanf("%d", &donvi);
	printf("Nhap so tien ban muon chuyen doi: ");
	scanf("%f", &sotien);
	switch(donvi){
		case 1:
			sotienchuyen = sotien * 23500;
			printf("%.2f VND = %.2f USD",sotien,sotienchuyen);
			break;
		case 2:
			sotienchuyen = sotien * 25000;
			printf("%.2f VND = %.2f EUR\n",sotien,sotienchuyen);
			break;
		case 3:
			sotienchuyen = sotien * 28000;
			printf("%.2f VND = %.2f GBP\n",sotien,sotienchuyen);
			break;
		case 4:
			sotienchuyen = sotien * 180;
			printf("%.2f VND = %.2f JPY\n",sotien,sotienchuyen);
			break;	
		case 5:
			sotienchuyen = sotien / 23500;
			printf("%.2f USD = %.2f VND\n",sotien,sotienchuyen);
			break;
		case 6:
			sotienchuyen = sotien / 25000;
			printf("%.2f EUR = %.2f VND\n",sotien,sotienchuyen);
			break;
		case 7:
			sotienchuyen = sotien / 28000;
			printf("%.2f GBP = %.2f VND\n",sotien,sotienchuyen);
			break;
		case 8:
			sotienchuyen = sotien / 180;
			printf("%.2f JPY = %.2f VND\n",sotien,sotienchuyen);
			break;
		default:
			printf("khong hop le\n");
	}
	return 0;
}
