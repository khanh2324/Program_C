#include<stdio.h>
#include<string.h>
int main()
{
	int SL, DM;
	char ten[30];
	fflush(stdin);
	printf("Nhap ten cong nhan: ");
	gets(ten);
	printf("\nNhap so luong san phan cua thang : ");
	scanf("%d", &SL);
	printf("\nNhap dinh muc san pham cua thang : ");
	scanf("%d", &DM);
	int Thuong = 0;
	if(SL <= DM){
		printf("\nTien thuong cua %s = 0", ten);
	}else{
		Thuong = (SL - DM)*100;
		printf("\nTien thuong cua %s la : %d", ten, Thuong);
	}
return 0;
}

