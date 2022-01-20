#include<stdio.h>
int i,j; 
void NhapMaTran1(int a[][100], int m, int n)
{
	printf("\nNhap vao ma tran A (m x n):\n");
   	for(i = 0; i < m; i++)
     	 for(j = 0; j < n; j++)
      	{
         	printf("Hang [%d] Cot [%d] = ", i + 1, j + 1);
         	scanf("%d", &a[i][j]);
      	}
}
 
void XuatMaTran1(int a[][100], int m, int n)
{
   	for(i = 0; i < m; i++)
  	{
      	for(j = 0; j < n; j++)
       		printf("%d\t", a[i][j]);
      		printf("\n");
   }
}
void NhapMaTran2(int b[][100], int n, int k)
{
	printf("\nNhap vao ma tran B (n x k):\n");
   	for(i = 0; i < n; i++)
     	 for(j = 0; j < k; j++)
      	{
         	printf("Hang [%d] Cot [%d] = ", i + 1, j + 1);
         	scanf("%d", &b[i][j]);
      	}
}
 
void XuatMaTran2(int b[][100], int n, int k)
{
   	for(i = 0; i < n; i++)
  	{
      	for(j = 0; j < k; j++)
       		printf("%d\t", b[i][j]);
      		printf("\n");
   }
}
void XuatMaTran3(int c[][100], int m, int k)
{
   	for(i = 0; i < m; i++)
  	{
      	for(j = 0; j < k; j++)
       		printf("%d\t", c[i][j]);
      		printf("\n");
   }
}
void Tich(int a[][100], int b[][100],int c[][100] ,int m, int n,int k){
	int l;
	for(i = 0; i < m; i++)
  	{
      	for(j = 0; j < k; j++){
      		for(l = 0; l < n; l++){
      			c[i][j] += a[i][l] * b[l][j];	
			}
		}
	}

}
int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100];
	int m,n,k;
	 do
	{
    	printf("Nhap n la so cot cua A va hang so hang cua B = ");
		scanf("%d",&n);
    	printf("\nNhap so hang m cua A = ");
		scanf("%d",&m);
		printf("\nNhap so cot k cua B = ");
		scanf("%d", &k);
    	
    	if(m <= 0 || n <= 0 || m > 100 || n > 100 || k <= 0 || k > 100){
    		printf("\nVui long nhap lai !\n");
		}
	}while(m <= 0 || n <= 0 || m > 100 || n > 100 || k <= 0 || k > 100);
	NhapMaTran1(a, m , n);
    printf("\nTa co Ma Tran A nhu sau \n");
    XuatMaTran1(a, m, n);
    
    NhapMaTran2(b, n , k);
    printf("\nTa co Ma Tran B nhu sau \n");
    XuatMaTran2(b, n, k);
    
    Tich(a, b, c, m, n, k);
    printf("\nTich 2 ma tran A va B la \n");
	XuatMaTran3(c, m, k);
return 0;
}
/*Code toi uu
#include<stdio.h>

void nhap(int a[][50], int *m, int *n) {// Nhap thong tin cho ma tran
	printf("\nNhap so hang, so cot cua ma tran A: ");
	scanf("%d%d", m, n); // so hang, so cot cua ma tran. dam bao so duong
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			printf("\nx[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}

void xuat(int a[][50], int m, int n) { // xuat thong tin ma tran tuong ung trong tham so truyen vao
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void tich(int a[][50], int b[][50], int c[][50], int m, int n, int k) {
	int i, j, l;
	for(i = 0; i < m; i++) {
		for(j = 0; j < k; j++) {
			for(l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
}

int main() { // start main function
	int a[50][50], b[50][50], c[50][50] = {0};
	int ma, na, mb, nb;
	
	printf("Nhap Ma Tran A: ");
	nhap(a, &ma, &na);
	printf("\nNhap Ma Tran B: ");
	nhap(b, &mb, &nb);
	
	if(na != mb) {
		printf("\nHai ma tran nay khong kha tich!");
	} else {
		tich(a, b, c, ma, na, nb);
		printf("\nMa tran A: \n");
		xuat(a, ma, na);
		printf("\nMa tran B: \n");
		xuat(b, mb, nb);
		printf("\nMa tran C: \n"); // ket qua
		xuat(c, ma, nb);
	}
	
	return 0;
}*/
