#include<stdio.h>
void TimSo(int n, int c){
	int so, i;
	for(i = 0; i < c; i++){
		so = n % 10;
		n /= 10;
	}
	printf("\nSo o vi tri can tim la: %d", so);
}
int main(){
	int n,c;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	printf("Nhap vi tri can tim so : ");
	scanf("%d", &c);
	TimSo(n, c);
	return 0;
}
