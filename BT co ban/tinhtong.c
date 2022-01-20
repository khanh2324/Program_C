#include<stdio.h>
#include<conio.h>
void showScreen()
{
	printf("\nXin moi ban lua chon cong thuc tinh tong\n");
	printf("0.Ket thuc lua chon\n");
	printf("1.Tinh tong cac so nho hon n\n");
	printf("2.Tinh tong cac so chan nho hon n\n");
	printf("3.Tinh tong cac so le nho hon n\n");
	printf("4.Tinh tong binh phuong cac so chan nho hon n\n");
	printf("\n");
}	
void tinhTongA()
{
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
	int i;
	int sum=0;
	for(i=0; i < n; i ++) {
		sum+=i;
	}
	printf("Tong cua cac so nho hon n la: %d\n", sum);
}
void tinhTongB()
{
	unsigned int n;
	printf("\nNhap n: ");
	scanf("%u",&n);
	int i;
	int sum=0;
	printf("Cac so chan la: ");
	for(i = 0; i < n; i += 2){
			printf("%d ", i);
			sum +=i;
		}
		printf("\nTong cac so chan la: %u\n", sum);
}
void tinhTongC()
{
	unsigned int n;
	printf("\nNhap n: ");
	scanf("%u",&n);
	int i;
	int sum=0;
	printf("Cac so le la: ");
	for(i = 1; i < n; i += 2)
		{
			printf("%d ", i);
			sum += i;
		}	
		printf("\nTong cac so le la: %u\n", sum);	
}
void tinhTongD()
{
    int i,s=0,n;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i % 2 == 0)
        {
            s = s + i*i;
            
        }
    }
    printf("Tong binh phuong cac so chan la: %d\n", s);
}			
int main()
{
	int tinhTong;
	do
	{
		showScreen();
		scanf("%d", &tinhTong);
		switch(tinhTong)
		{
			case 1:
				tinhTongA();
				break;
			case 2:
				tinhTongB();
				break;
			case 3:
			    tinhTongC();
			    break;
			case 4:
			    tinhTongD();
				break;
			case 0:
			    printf("Ket thuc lua chon !\n");
				break;	    
			default:
			    printf("Vui long nhap lai !\n");
				break;
		}
	}while (tinhTong != 0);
	printf("\n\n");	
	return 0;
}
