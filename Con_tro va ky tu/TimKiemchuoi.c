#include<stdio.h>
#include<string.h>
int main() {
	char str1[100];
	char str2[100];
	char CatChuoi;
	printf("Nhap chuoi ban dau: ");
	gets(str1);
	printf("\nNhap chuoi ky tu can trich xuat: ");
	gets(str2);
	strstr(str1, str2);
	printf("\nChuoi sau khi trich xuat la: %s", strstr(str1,str2));
	return 0;
}

