#include<stdio.h>
#include<stdbool.h>
//Bai nhap mang sau do in ra gia tri min,max thu 2, sau do nhap x de dem so lan xuat hien cua x
const int MAX_N = 100;
int i, x;// nhap, xuat mang
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
//tim gia tri Max => gia tri max 2
void TimMax2(int a[], int n){
    int max = a[0];
	int max2 = 0;
    for(i = 0; i < n; i++){
        if(max < a[i])
        {
            max = a[i]; 
        }    
    }
    // Gan gia tri lon nhat cua mang cho max
    for(i = 0; i < n; i++){
        if(max == a[i])
        {
            continue;
        }    
        else if(max2 < a[i]){
            max2 = a[i];
        }
    }
    printf("\nGia tri lon thu hai trong mang la = %d", max2);
}
void TimMin2(int a[], int n){
    int min = a[0];
	int min2 ;
    for(i = 0; i < n; i++){
        if(min > a[i])
        {
            min = a[i]; 
        }    
    }
    // Gan gia tri nho nhat cua mang cho min
    for(i = 0; i < n; i++){
        if(min == a[i])
        {
            continue;
        }    
        else if(min2 > a[i]){
            min2 = a[i];
        }
    }
    printf("\nGia tri nho thu hai trong mang la = %d", min2);
}// chuong trinh tim kiem x co trong mang hay khong
bool TimKiem(int a[i], int n, int x){
	bool isFound = false ; // khi khong tim thay thi la false
	for(i = 0;i < n;i++){
		if(a[i] == x){
			isFound = true;
		}
	}
	return isFound; //khac isFound phia duoi	
}
//chuong trinh dem so lan xuat hien cua x
int countX(int a[],int n, int x){
	int count = 0;
		for(i = 0; i < n; i++){
			if(a[i] == x) {
				count++;
			}
		}
	return count;
}
void Appear(int a[], int n, int x){
	printf("\nNhap gia tri x trong mang: ");
	scanf("%d", &x);
	bool isFound = TimKiem(a, n, x);
	int soLanXuatHien = countX(a, n, x);
	if( isFound == true){
		printf("\nSo lan xuat hien x trong mang: %d", soLanXuatHien);
	}else if(isFound == false){
		printf("\nKhong co gia tri %d trong mang !", x);
	}
}
int main()
{
	int n;
	int a[MAX_N];
	printf("\nNhap so luong n phan tu cua mang = ");
	do{
		scanf("%d",&n);
		if(n <= 0 || n > MAX_N){
			printf("\nNhap lai n = ");
			}	
	}while(n <= 0 || n > MAX_N);
	NhapMang(a, n);
	XuatMang(a, n);
	TimMax2(a, n);
	TimMin2(a, n);
	Appear(a, n, x);
return 0;
}

