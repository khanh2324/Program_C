#include<stdio.h>
int i,j;
const int MAX = 1e5;
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
//chuong trinh loai bo cac phan tu trung nhau
void XoaTrung(int arr[],int *n){
   	int k;
   	for(i = 0 ; i < (*n) - 1; i++){
    	j = i+1;
    while (j<*n)
      	if (arr[i] == arr[j]){
         	for (k = j;k < (*n) - 1;k++) arr[k] = arr[k+1];
        *n=(*n)-1;
      	}
      	else j=j+1;
   }
}
void DemSoLanXH(int arr[], int n, int cnt[]){
	for(i = 0;i < MAX; i++) 
		cnt[i] = 0;
    for(i = 0; i < n;i++){
        cnt[arr[i]]++;
    }
    for(i = 0;i < MAX; i++){
        if(cnt[i] > 0){
            printf("\nGia tri %d xuat hien %d lan !", i, cnt[i]);
        }
    }
}
int main()
{
	int n;
	int arr[100];
	int cnt[MAX];
	printf("\nNhap so phan tu n cua mang = ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > 100){
			printf("\nNhap lai n = ");
		}	
	}while(n <= 0 || n > 100);
	NhapMang(arr, n);
	printf("\nTa co mang sau:");
	XuatMang(arr, n);
	
	XoaTrung(arr, &n);
	printf("\nMang sau khi thu gon la:");
	XuatMang(arr, n);
	
	DemSoLanXH(arr, n, cnt);

return 0;
}

