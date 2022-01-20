#include<stdio.h>
int F(int n){
	if(n == 1 || n == 2)
		return 1;
	else
		return F(n - 1) + F(n - 2);
}
int main()
{
	int n;
	printf("Nhap gia tri n: ");
	scanf("%d", &n);
	printf("\nGia tri Fibonacci la: %d", F(n));
return 0;
}
