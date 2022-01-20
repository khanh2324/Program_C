#include<stdio.h>
#include<math.h>
#include <stdbool.h>
int nhap() {
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}
int timUoc(int n){
	int i;
	printf("Uoc cua n la: ");
	for(i = 1;i <= n;i++){
		if(n % i == 0){
		printf("%d ", i);
		}	
	}
}	
int Dem_UocSo(int n){
    int dem = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    return dem;
}
bool ktraNgTo(int n) {
	if(n < 2) {
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

void lietKeUocNT(int n){
	int i;
	printf("Cac uoc so nguyen to cua n la: ");
	for(i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			if(ktraNgTo(i)) {
				printf("%d ", i);
			}
			if(ktraNgTo(n / i) && i != (n/i)) {
				printf("%d ", n / i);
			}
		}
	}
}
int main()
{
	int n;
	n = nhap();
	timUoc(n);
	printf("\nSo uoc cua n la: %d\n", Dem_UocSo(n));
	lietKeUocNT(n);
return 0;
}

