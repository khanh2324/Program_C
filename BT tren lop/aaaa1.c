#include<stdio.h>
int main()
{
	int i = 1, x;
	int tbc = 0;
	float tong = 0;
	printf("Nhap x[%d] = ", i);
	scanf("%d", &x);
	while( x != 0){
		if((x % 2 == 0) && (x > 0) && (x % 3 != 0)){
			tong += x;
			tbc++;
		}
		i++;
		printf("x[%d] = ", i);
		scanf("%d", &x);
	}
	printf("\nTong cac so chan = %3f", tong/tbc);
return 0;
}
