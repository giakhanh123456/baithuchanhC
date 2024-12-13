#include<stdio.h>
#include<math.h>

int kiemtraSNT(int  number){
	int i;
	if(number <2){
	return 0;
     }
    for(i = 2; i <= sqrt(number); i++){
		if(number % i ==0){
			return 0;
         }
     }
     return 1;
}
int main(){
	int n;
	int number = 2;
	int count = 0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
    if(n < 1){
    	printf("khong co so nguyen to nao");
    	return 0;
	}
	printf("%d so nguyen to dau tien la: ", n);
	while(count < n){
	 	if(kiemtraSNT(number)){
		printf("%d ", number);
     	count++;
         }
        number++;
	 }
	 return 0;
}
