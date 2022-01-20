#include<stdio.h>
// toan tu 3 ngoi 
int main()
{
	int a,b,max;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("\nNhap b: ");
	scanf("%d", &b);
	//(dieu kien) ? (if true) : (if false); - cu phap tong quan
	
	max = (a > b) ? a : b;// vi du thay cho ham if else tim max
	printf("Max = %d", max);
	// hoac la
	// printf("Max = %d", (a > b) ? a : b);
return 0;
}

