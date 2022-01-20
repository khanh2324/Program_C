#include<stdio.h>
#include<stdbool.h>
int i,j;
void NhapMang(const int arr[], int n){
	for(i = 0; i < n; i++){
		printf("\nNhap phan tu %d: ", i + 1);
		scanf("%d", &arr[i]);
		}
}
void XuatMang(const int arr[], int n){
	for (i = 0;i < n; i++){
		printf("%5d", arr[i]);
		}	
}
void Tong(int arr[], int n, int a, int b){
	int sum = 0;
	printf("\nNhap a > 0: ");
	scanf("%d", &a);
	printf("\nNhap b > a: ");
	scanf("%d", &b);
	if( a <= 0 || b > n){
		printf("Vui long nhap a,b < n va > 0");
	}else{
		for(j = a - 1; j <= b - 1 ; j++){
			sum = sum + arr[j];
		}
		printf("\nTong cac phan tu mang co gia tri trong doan a -> b la: %d", sum);
	}
}		
int DoiXung(int arr[], int n){
		for(i = 0; i < n / 2 ; i++){
			if(arr[i] != arr[n - i - 1]){
				return -1;
				break;
			}
	}
	return 1;
}
int main()
{
	int n,a,b;
	int arr[100];
	printf("\nNhap so luong n phan tu cua mang = ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > 100){
			printf("\nNhap lai n = ");
			}	
	}while(n <= 0 || n > 100);
	NhapMang(arr, n);
	printf("\nTa co mang sau:");
	XuatMang(arr, n);
	Tong(arr, n, a, b);
	if(DoiXung(arr, n) == 1){
		printf("\nMang da cho la mang doi xung !");
	}else{
		printf("\nMang da cho khong phai mang doi xung !");
	}
return 0;
}

