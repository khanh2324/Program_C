#include<stdio.h>
int i,j; 
void NhapMaTran(int a[][100], int m, int n)
{
   	for(i = 0; i < m; i++)
     	 for(j = 0; j < n; j++)
      	{
         	printf("Hang [%d] Cot [%d] = ", i + 1, j + 1);
         	scanf("%d", &a[i][j]);
      	}
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   	for(i = 0; i < m; i++)
  	{
      	for(j = 0; j < n; j++)
       		printf("%d\t", a[i][j]);
      		printf("\n");
   }
}
void chuyenVi(int a[][100], int m, int n){
	for(i = 0; i < n; i++)
  	{
      	for(j = 0; j < m; j++)
       		printf("%d\t", a[j][i]);
      		printf("\n");
   }
}
int main()
{
	int a[100][100];
    int m,n;
    do
	{
    	printf("Nhap so cot n = ");
		scanf("%d",&n);
    	printf("\nNhap so hang m = ");
		scanf("%d",&m);
    	printf("\nNhap vao ma tran:\n");
    	if(m <= 0 || n <= 0 || m > 100 || n > 100){
    		printf("\nVui long nhap lai !\n");
		}
	}while(m <= 0 || n <= 0 || m > 100 || n > 100);
    
    NhapMaTran(a, m , n);
    printf("\nTa co Ma Tran m x n nhu sau \n");
    XuatMaTran(a, m, n);
    
    printf("\nMa tran sau khi chuyen vi la:\n");
    chuyenVi(a, m, n);
return 0;
}

