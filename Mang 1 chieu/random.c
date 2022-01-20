#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//int r = 5 + rand() % (10 + 1 - 5), sinh so ngau nhien khoang tu 5 -> 10
int i;
bool chuaXH(int a[], int n, int x) {
	for(i = 0; i < n; i++) {
		if(a[i] == x) {
			return false;
		}
	}
	return true;
}
void NhapMang( int a[], int n){
	srand((int) time(0));
	while(i < n) {
		int x = rand();
		if(chuaXH(a, i, x)) {
			a[i++] = x;
		}
		printf("Rand %d is %d\n",i, x);
	}
}
void XuatMang(int a[], int n){
	for (i = 0;i < n; i++){
		printf("%5d  ", a[i]);
	}	
}
int main()
{
	int n;
	int a[100];
	printf("\nNhap so phan tu n cua mang = ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > 100){
			printf("\nNhap lai n = ");
		}	
	}while(n <= 0 || n > 100);
	NhapMang(a, n);
	printf("\nMang sau khi random la :");
	XuatMang(a, n);
return 0;
}

