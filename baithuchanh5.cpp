#include<stdio.h>
#include<math.h>

int main(){
	int i,n;
	int count = 0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n < 2){
		printf("%d khong phai la so nguyen to\n", n);
		}
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			count++;
			}
	}
	    if(count > 0){
	    	printf("%d khong phai la so nguyen to\n", n);
	    }
	    else{
	    	printf("%d la so nguyen to\n", n);
		}
	   
	return 0;
}	
