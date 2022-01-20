#include<stdio.h>
#include<math.h>
#include<stdbool.h>
//viet chuong trinh lua chon
void luaChonCT(){
	printf("\nXin moi ban lua chon loai chuong trinh !\n");
	printf("1.Chuong trinh ve hinh\n");
	printf("2.Chuong trinh tinh toan\n");
	printf("0.Ket thuc lua chon !\n\n");
}
void VeHinh(){
	printf("\nXin moi lua chon loai chuong trinh\n");
	printf("1.Chuong Trinh nhap m,n roi in ra hinh chu nhat m hang ,moi hang liet ke tu 1 den n\n");
	printf("2.Chuong Trinh nhap h roi in ra tam giac vuong can co chieu cao h\n");
	printf("3.Chuong Trinh nhap h roi in ra tam giac can chieu cao h\n");
	printf("4.Chuong Trinh nhap h roi in ra tam giac so doi xung chieu cao h\n");
	printf("0.Ket thuc lua chon !\n");
	printf("\n");
}
void TinhToan(){
	printf("\nXin moi lua chon loai chuong trinh\n");
	printf("1.Chuong Trinh nhap a,b voi a < b roi tim ra tat ca so nguyen to tu a -> b\n");
	printf("2.Chuong Trinh phan tich n\n A.Nhap n\n B.Tinh tong cac chu so cua n\n C.Phan tich n thanh thua so nguyen to\n");
	printf("3.Chuong Trinh Thuc hien cac chuc nang sau\n A.Nhap n\n B.Liet ke uoc cua n\n C.Dem so uoc cua n\n D.Liet ke uoc nguyen to cua n\n");
	printf("4.Chuong Trinh Thuc hien cac chuc nang sau\n A.Nhap n > 0\n B.Kiem tra cac chu so cua n co tang dan hay khong ?\n C.Tim chu so dau tien cua n\n D.Dem so lan xuat hien cua chu so dau tien do\n");
	printf("0.Ket thuc lua chon !\n");
	printf("\n");
}
//viet chuong trinh chay cua ve hinh
void VeHinhA(){//chuong trinh so 1
	int n,m;
    int i, k;
    printf("Nhap m: ");
    scanf("%d",&m);
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n<=0 || m <= 0;)
    {
        if(m <= 0){
            printf("Phai nhap m > 0 \nNhap lai m: ");
            scanf("%d",&m);
        }
        if(n <= 0){
            printf("Phai nhap n > 0 \nNhap lai n: ");
            scanf("%d",&n);
        }
    }    
    for(i = 1; i <= m; i++){
        for(k = 1 ; k <= n; k++){
            printf("%d ", k);// neu in ra chu x thi thay printf("x");
        }
        printf("\n");
    }	
}
void VeHinhB(){//chuong trinh so 2 ve hinh
	int h;
	printf("Nhap vao chieu cao h: ");
	scanf("%d", &h);
	
	if(h > 0) {
		int i, j;
		for(i = 1; i <= h; i++) {
			for(j = 1; j <= i; j++) {
				printf(" * ");
			}
			printf("\n");
		}
	} else {
		printf("Nhap vao so duong h!");
	}
}
void VeHinhC(){//chuong trinh so 3 ve hinh
	int h;
	printf("nhap h: ");
	scanf("%d", &h);
	
	if(h > 0) {
		int i, j;
		for(i = 1; i <= h; i++) {
			for(j = 1; j < 2 * h; j++) {
				if(abs(h - j) <= (i - 1)) {
					printf(" * ");
				} else {
					printf("   ");
				}
			}
			printf("\n");
		}
	} else {
		printf("Nhap h > 0!");
	}
}
void VeHinhD(){//chuong trinh so 4 ve hinh
	int h, i, j;
	printf("Nhap so duong h: ")	;
	scanf("%d", &h);
	
	if(h > 0) {
		for(i = 1; i <= h; i++) {
			for(j = 1; j < 2*h; j++) {
				if(abs(h - j) <= (i - 1)) {
					printf("%3d", i - abs(h - j));
				} else {
					printf("   ");
				}
			}
			printf("\n");
		}
	} else {
		printf("Vui long nhap h > 0.");
	}
}//chuong trinh chay cua tinh toan
void TinhToanA(){
	int a,b,i,j, var;
	printf("Nhap a > 0: ");
	scanf("%d", &a);
	printf("Nhap b > a: ");
	scanf("%d", &b);
	printf("So nguyen to trong pham vi tu %d den %d là: \n", a, b);
	for(i=a+1; i<b; ++i)
   	{
    	var=0;
    	for(j=2; j<=i/2; ++j)
    	{
        	if(i%j==0)
         	{
            	var=1;
            	break;
         	}
      	}
      if(var==0)
         printf("%d ",i);
  	}
}
int tong(int n){//chuong trinh con cua TinhToanB
	int sum = 0;
    while (n > 0) {
		sum += n % 10;
		n /= 10;	
	}return sum;
}
void TinhToanB(){
	int n,i;
    printf("\nNhap n = ");
    scanf("%d", &n);
    int dem;
    printf("Tong cac chu so cua n: %d", tong(n));
    printf("\nn phan tich thanh: ");
    for( i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            if(dem > 1) printf("%d^%d", i, dem);
            else printf("%d", i);
            if(n > i){
                printf("*");
            }
        }
	}printf("\n");
}
int nhap(){//chuong trinh con cua TinhToanC
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}
int timUoc(int n){
	int i= 0;
	printf("Uoc cua n la: ");
	for(i = 1;i <= n;i++){
		if(n % i == 0){
		printf("%d ", i);
		}	
	}
}	
int Dem_UocSo(int n){
    int dem = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    return dem;
}
bool ktraNgTo(int n) {
	if(n < 2) {
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}
void lietKeUocNT(int n){
	int i;
	printf("Cac uoc so nguyen to cua n la: ");
	for(i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			if(ktraNgTo(i)) {
				printf("%d ", i);
			}
			if(ktraNgTo(n / i) && i != (n/i)) {
				printf("%d ", n / i);
			}
		}
	}
}
void TinhToanC(){//chuong trinh tinh toan so 3
	int n;
	n = nhap();
	timUoc(n);
	printf("\nSo uoc cua n la: %d\n", Dem_UocSo(n));
	lietKeUocNT(n);
	printf("\n");
}
int nhapD() {//chuong trinh con cua TinhToanD
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}
bool ktra(int n) {
	int a, b;
	a = n % 10;
	n /= 10;
	while(n > 0) {
		b = n % 10;
		n /= 10;
		if(b >= a) {
			return false;
		}
		a = b;
	}
	return true;
}
int firstDigit(int n) {
	int digit = 0;
	while(n > 0) {
		digit = n % 10;
		n /= 10;
	}
	return digit;
}
int countFirstDigit(int n) {
	int first = firstDigit(n);
	int count = 0;
	int aDigit;
	while(n > 0) {
		aDigit = n % 10;
		n /= 10;
		if(aDigit == first) {
			count++;
		}
	}
	return count;
}
void TinhToanD(){//chuong trinh tinh toan so 4
	int n;
	n = nhapD();
	if(ktra(n)) {
		printf("Cac chu so cua n sap xep theo thu tu tang dan!\n");
	} else {
		printf("Cac chu so cua n KHONG sap xep theo thu tu tang dan!\n");
	}
	
	printf("Chu so dau tien cua n: %d\n", firstDigit(n));
	
	printf("So lan xuat hien cua chu so dau tien cua n: %d\n", countFirstDigit(n));
	printf("\n");
}
int main()
{
	int proGram;
	int proGramVeHinh;
	int proGramTinhToan;	
	do
	{
		luaChonCT();
		scanf("%d", &proGram);
		switch(proGram)
		{
			case 1:
			do
			{
				VeHinh();
				scanf("%d", &proGramVeHinh);
				switch(proGramVeHinh)
				{
					case 1:
						VeHinhA();	
						break;
					case 2:
						VeHinhB();
						break;
					case 3:
						VeHinhC();
						break;
					case 4:
						VeHinhD();
						break;
					case 0:
						printf("Ket thuc lua chon !\n");
						break;
					default:
			    		printf("Vui long nhap lai !\n");
						break;
				}
			}while(proGramVeHinh != 0);
				break;
			case 2:
			do
			{
				TinhToan();
				scanf("%d", &proGramTinhToan);
				switch(proGramTinhToan)
				{
					case 1:
						TinhToanA();
						break;
					case 2:
						TinhToanB();
						break;
					case 3:
						TinhToanC();
						break;
					case 4:
						TinhToanD();
						break;
					case 0:
						printf("Ket thuc lua chon !\n");
						break;
					default:
			    		printf("Vui long nhap lai !\n");
						break;
				}
			}while(proGramTinhToan != 0);
			printf("\n");
			break;
		}
	}while(proGram != 0);
	printf("\n");
return 0;
}

