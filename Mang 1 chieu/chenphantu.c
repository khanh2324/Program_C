#include<stdio.h>
int i;
void NhapMang(int a[], int n){
    for(i = 0;i < n; i++){
        printf("\nNhap so thu %d: ", i + 1 );
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n){
    for(i = 0;i < n; i++){
        printf("%5d", a[i]);
    }
}

void ChenPhanTu(int a[], int n, int x, int k){
    // Mang rong, khong the xoa.
    if(n <= 0){
        return;
    }
    for(i = 0; i > k; i--){//co the thay i = n nhung phai sua i o nhap mang
        a[i] = a[i - 1];
    }
   	a[k - 1] = x;//vi o nhap mang ta dung i + 1 nen k - 1
   	++n;
}
int main()
{
	int n, k, x;
	int a[100];
	printf("\nNhap so phan tu n cua mang = ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > 100){
			printf("\nNhap lai n = ");
		}	
	}while(n <= 0 || n > 100);
	NhapMang(a, n);
	printf("\nTa co mang sau :");
    XuatMang(a, n);
    
    printf("\nNhap vi tri k cua mang can thay gia tri : ");
    scanf("%d", &k);
    printf("\nNhap gia tri x thay the : ");
    scanf("%d", &x);
    ChenPhanTu(a, n, x, k);
    printf("\nMang sau khi thay the la:");
    XuatMang(a, n);
return 0;
}

