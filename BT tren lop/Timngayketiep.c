#include<stdio.h>
void NhanXet(int ngay, int thang, int nam, int NgayCuoiThang){
	if(ngay == NgayCuoiThang){
		ngay = 1;
		if(thang == 12){
			thang = 1;
			nam++;
		}else{
			thang++;
		}
	}else ngay++;
	printf("Ngay ke tiep la: %d / %d / %d", ngay, thang, nam);
}
int main()
{
	int ngay,thang,nam;
	int NgayCuoiThang;
	
	do{
		printf("\nNhap ngay : ");
		scanf("%d", &ngay);
		printf("\nNhap thang : ");
		scanf("%d", &thang);
		printf("\nNhap nam : ");
		scanf("%d", &nam);
		if(thang == 1||thang == 3||thang == 5||thang == 7||thang == 8||thang == 10||thang == 12){
			NgayCuoiThang = 31;
		}else if (thang == 2){
			if(nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0){
				NgayCuoiThang = 29;
			}else{
				NgayCuoiThang = 28;
			}
		}else{
			NgayCuoiThang = 30;
		}
		if( ngay <= 0 || ngay > NgayCuoiThang || thang < 1 || thang > 12 || nam <= 0){
			printf("\nBan da nhap sai !\nVui long nhap chinh xac ngay thang nam!");
		}
	}while (ngay <= 0 || ngay > NgayCuoiThang || thang < 1 || thang > 12 || nam <= 0);
	NhanXet(ngay, thang, nam, NgayCuoiThang);
	
return 0;
}

