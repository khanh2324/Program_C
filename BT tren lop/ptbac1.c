#include<stdio.h>
int main()
{
	int a,b;
	float x;
	printf("Nhap a : ");
	scanf("%d", &a);
	printf("Nhap b : ");
	scanf("%d", &b);
	if(a == 0){
		if(b == 0){
			printf("\nPhuong trinh vo so nghiem !");
		}else{
			printf("\nPhuong trinh vo nhiem !");
		}
	}else{
		x = (float)-b/a;
		printf("\nGia tri cua x la: %.1f", x);
	}
return 0;
}

