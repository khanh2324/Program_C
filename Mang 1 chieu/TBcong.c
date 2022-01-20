#include<stdio.h>
#include<stdbool.h>
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
//tim kiem mang co so chan hay k
bool TimKiemC(int a[i], int n){
	bool isFound = false ; // khi khong tim thay thi la false
	for(i = 0; i < n ; i++){
		if(a[i] % 2 == 0){
			isFound = true;
		}	
	}
	return isFound; //khac isFound phia duoi	
}
void TBChan(int a[], int n){
	int S1 = 0;
	double medium1;
	int count1 = 0;
	bool isFound = TimKiemC(a, n);
	if(isFound == true){
		for(i = 0; i < n; i++){
				if(a[i] % 2 == 0){
				count1++;
				S1 = S1 + a[i];
				}
			}
	medium1 = (double) S1 / count1;
	printf("\nTrung binh cong cac so chan trong mang la: %f", medium1);
    }else{
    	printf("\nMang khong co gia tri la so chan !");
	}
}
//tuong tu voi cac so le
bool TimKiemL(int a[i], int n){
	bool Found = false ;
	for(i = 0; i < n ; i++){
		if(a[i] % 2 != 0){
			Found = true;
		}	
	}
	return Found; //khac Found phia duoi	
}
void TBLe(int a[], int n){
	int S2 = 0;
	double medium2;
	int count2 = 0;
	bool Found = TimKiemL(a, n);
	if(Found == true){
		for(i = 0; i < n; i++){
				if(a[i] % 2 != 0){
				count2++;
				S2 = S2 + a[i];
				}
			}
	medium2 = (double) S2 / count2;
	printf("\nTrung binh cong cac so le trong mang la: %f", medium2);
    }else{
    	printf("\nMang khong co gia tri la so le !");
	}
}
int main()
{
	int n;
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
	TBChan(a, n);
	TBLe(a, n);
return 0;
}
