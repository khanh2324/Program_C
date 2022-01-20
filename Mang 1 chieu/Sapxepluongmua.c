#include<stdio.h>
int i;
void NhapMang(int a[]){
	for(i = 0; i < 12; i++){
		printf("\nNhap luong mua cua thang %d: ", i + 1);
		scanf("%d", &a[i]);
		}
}
int MaxLuongMua(int a[]){
	int Max = a[0];
	for(i = 0; i < 12; i++){
		if(a[i] > Max){
			Max = a[i];
		}
	}
	return Max;
}
void ThangMuaMax(int a[]){
	int Max = MaxLuongMua(a);
	printf("\nThang co luong mua lon nhat la thang ");
	for(i = 0; i < 12; i++){
		if(a[i] == Max){
			printf("%d", i + 1);
		}
	}
}
int main()
{	
	int a[12];
	NhapMang(a);
	ThangMuaMax(a);
	
return 0;
}

