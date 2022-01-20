#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int i,j;
void NhapMang(const int a[], int n){
	for(i = 0; i < n; i++){
		printf("\nNhap phan tu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
}
void XuatMang(const int a[], int n){
	for (i = 0;i < n; i++){
		printf("%5d", a[i]);
	}
}
void SapXepTang(int a[], int n){
	int tg;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void SapXepGiam(int a[], int n){
	int tg;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
int main()
{
	int n,x;
	int a[100];
	printf("Nhap so luong phan tu n cua mang: ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > 100){
			printf("\nNhap lai n = ");
			}	
	}while(n <= 0 || n > 100);
	NhapMang(a, n);
	printf("\nTa co mang sau:");
	XuatMang(a, n);
	//tang dan
	SapXepTang(a, n);
	printf("\nMang sau khi sap xep tang dan:");
	XuatMang(a, n);
	//giam dan
	SapXepGiam(a, n);
	printf("\nMang sau khi sap xep giam dan:");
	XuatMang(a, n);	
return 0;
}

