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

int nhapK(int n) {
	int k = -1;
	while(k < 0 || k > n) {
		printf("\nNhap vi tri k cua mang can xoa : ");
		scanf("%d", &k);
	}
	return k;
}
void XoaPhanTu(int a[], int n, int k){
    for(i = k; i > n-1; i++){
        a[i] = a[i + 1];
    }
   	n -= 1;
}
int main()
{
	int n,k;
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
    
    printf("\nNhap vi tri k cua mang can xoa : ");
    do{
    	scanf("%d", &k);
    	if(k <= 0 || k > n){
    		printf("\nNhap lai vi tri k : ");
    	}
	}while(k <= 0 || k > n);
    XoaPhanTu(a, n, k);
    printf("\nMang sau khi xoa la:");
    XuatMang(a, n);
return 0;
}


