#include<stdio.h>
#include<stdbool.h>
const int MAX_N = 100;
int i;
void NhapMang(int a[], int n){
	for(i = 0; i < n; i++){
		printf("\nNhap phan tu %d = ", i + 1);
		scanf("%d", &a[i]);
		}
}
void XuatMang(int a[], int n){
	for (i = 0;i < n; i++){
		printf("%5d", a[i]);
		}	
}
int TinhTong(int a[], int n){// vi tra ve so nguyen nen dung int 
	int S = 0;
	for(i = 0; i < n; i++){
		S = S + a[i];
	}
return S;	
}
bool TimKiem(int a[i], int n, int value){
	bool isFound = false ; // khi khong tim thay thi la false
	for(i = 0;i < n;i++){
		if(a[i] == value){
			isFound = true;
		}	
	}
	return isFound; //khac isFound phia duoi	
}
int TimMax(int a[], int n){
	int maxVal = a[0];
	for( i = 1; i < n; i++){
		if(a[i] > maxVal){
			maxVal = a[i];
		}
	}
	return maxVal;
}	
int main()
{
	int n;
	int a[MAX_N];
	
	printf("\nNhap so luong phan tu cua mang = ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > MAX_N){
			printf("\nNhap lai n =");
			}	
	}while(n <= 0 || n > MAX_N);
	
	NhapMang(a, n);
	XuatMang(a, n);
	// tinh tong các phan tu cua mang

	printf("\nTong S = %d", TinhTong(a, n));
	// tim phan tu trong mang
	
	int value;
	printf("\nNhap gia tri can tim kiem: ");
	scanf("%d", &value);
	bool isFound = TimKiem(a, n, value);
	if( isFound == true){
		printf("\nCo gia tri %d trong mang !", value);
	}else{
		printf("\nKhong co gia tri %d trong mang !", value);
	}	
	//tim MAX

	printf("\nMax = %d", TimMax(a, n));
	// tuong tu voi tim min
		
return 0;
}

