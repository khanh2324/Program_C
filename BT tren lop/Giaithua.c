#include<stdio.h>
int Gt(int n){
	if(n == 0)
		return 1;
	else
		return n*Gt(n-1);
}
int main()
{
	int n;
	printf("Nhap gia tri n: ");
	scanf("%d", &n);
	printf("\nGia tri giai thua cua n la: %d", Gt(n));
return 0;
}

