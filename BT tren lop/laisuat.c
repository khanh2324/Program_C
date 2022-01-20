#include<stdio.h>
#include<math.h>
int main()
{
	int k, i;
	float t,n;
	float tien = 0;
	printf("Nhap so von ban dau n: ");
	scanf("%f", &n);
	printf("\nNhap so thang gui tiet kiem: ");
	scanf("%d", &k);
	printf("\nNhap lai suat t %/thang: ");
	scanf("%f", &t);
	tien = n*pow(1 + t/100, (float)k);// pow = so mu !
	printf("\nSo tien nhan duoc sau k thang la: %f", tien);
return 0;
}

