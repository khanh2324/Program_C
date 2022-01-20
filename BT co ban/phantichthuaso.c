#include <stdio.h>
int tong(int n){
	int sum = 0;
    while (n > 0) {
		sum += n % 10;
		n /= 10;	
	}return sum;
}
int main(){
    int n,i;
    printf("Nhap n = ");
    scanf("%d", &n);
	int dem;
	printf("Tong cac chu so cua n: %d", tong(n));
	printf("\nn phan tich thanh: ");
    for( i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            if(dem > 1) printf("%d^%d", i, dem);
            else printf("%d", i);
            if(n > i){
                printf("*");
            }
        }
    }
  return 0;  
}
