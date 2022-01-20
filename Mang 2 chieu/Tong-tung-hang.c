#include<stdio.h>
int i,j; 
void NhapMaTran(int a[][100], int m, int n)
{
	printf("\nNhap vao ma tran :\n");
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
void TinhTong(int a[][100],int m, int n){
	for(i = 0; i < m; i++){
		int S = 0;
		for(j = 0; j < n; j++){
			S = S + a[i][j];
		}
		printf("\nTong cua tung hang cua ma tran la : %d", S);
	}
}
int main()
{
	int a[100][100];
    int m,n;
    do
	{
		printf("\nNhap so hang m cua ma tran = ");
		scanf("%d",&m);
    	printf("Nhap so cot n cua ma tran = ");
		scanf("%d",&n);
		
    	if(m <= 0 || n <= 0 || m > 100 || n > 100){
    		printf("\nVui long nhap lai !\n");
		}
	}while(m <= 0 || n <= 0 || m > 100 || n > 100);
	
	printf("\nNhap gia tri ma tran A: \n");
	NhapMaTran(a, m , n);
    printf("\nTa co Ma Tran A nhu sau \n");
    XuatMaTran(a, m, n);
    
    TinhTong(a, m, n);
return 0;
}

