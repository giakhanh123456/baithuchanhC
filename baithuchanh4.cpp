#include<stdio.h>

int main(){
	int n, i;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	printf("cac uoc cua %d la: ", n);
	for(i = 1; i <= n; i++){
         if(n % i == 0){
         	printf("%d ", i);
        }
    }
        return 0;
}
		
