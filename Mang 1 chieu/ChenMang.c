#include<stdio.h>
int i;
void NhapMang1(int a[], int n){
	for(i = 0; i < n; i++){
		printf("\nNhap phan tu %d mang 1: ", i + 1);
		scanf("%d", &a[i]);
	}
}
void XuatMang1(int a[], int n){
	for (i = 0;i < n; i++){
		printf("%5d", a[i]);
	}
}
void NhapMang2(int b[], int m){
	for(i = 0; i < m; i++){
		printf("\nNhap phan tu %d mang 2: ", i + 1);
		scanf("%d", &b[i]);
	}
}
void XuatMang2(int b[], int m){
	for (i = 0;i < m; i++){
		printf("%5d", b[i]);
	}
}
void ChenMang(int a[], int b[], int n, int m, int k){
	for (i = n + m - 1; i >= m + k; i--) {
		a[i]=a[i-m];
	}
 	for ( i = 0; i < m; i++){
 		a[i+k] = b[i];
	}
 	n + m;
}
int main()
{
	int n, k, m;
	int a[100];
	int b[100];
	printf("\nNhap so phan tu n cua mang 1 = ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > 100){
			printf("\nNhap lai n = ");
		}	
	}while(n <= 0 || n > 100);
	printf("\nNhap so phan tu m cua mang 2 = ");
	do{
		scanf("%d",&m);
		if(m <= 0 || m > 100){
			printf("\nNhap lai m = ");
		}	
	}while(m <= 0 || m > 100);
	
	NhapMang1(a, n);
	printf("\nTa co mang 1 :");
	XuatMang1(a, n);
	
	NhapMang2(b, m);
	printf("\nTa co mang 2:");
	XuatMang2(b, m);
	
	printf("\nNhap vi tri k cua mang 1 can chen  : ");
    scanf("%d", &k);
    ChenMang(a, b, n, m, k);
    printf("Mang sau khi chen la : ");
    XuatMang1(a, n + m);
return 0;
}

