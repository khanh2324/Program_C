#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Nhap canh a : ");
	scanf("%d", &a);
	printf("Nhap canh b : ");
	scanf("%d", &b);
	printf("Nhap canh c : ");
	scanf("%d", &c);
	if( a > 0 && b > 0 && c > 0){
		if( (a + b > c )&& (a + c > b )&& (c + b > a)){
			if( a == b || b == c || c == a){
				if(a == b && b == c){
					printf("\na,b,c la ba canh cua tam giac deu !");
				}else{
					printf("\na,b,c la ba canh cua tam giac can !");
				}
			}
			else if( (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
				printf("\na,b,c la ba canh cua tam giac vuong !");
			}
			else{
				printf("\na,b,c la ba canh cua tam giac !");
			}	
		}else{
			printf("\na,b,c khong phai ba canh cua mot tam giac !");
		}
	}else{
		printf("\nVui long nhap a,b,c > 0 !");
	}
return 0;
}

