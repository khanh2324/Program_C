#include <stdio.h>

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
int TimMax(int a[][100], int m, int n){
	int max = a[0][0];
	for(i = 1; i < m; i++){
		for(j = 1; j < n; j++){
			if(a[i][j] > max)
      	 	{
        	    max = a[i][j];
       		}
		}
	}
	return max;
	/*Tim Max tren cot hoac hang !
	for(i=1;i<n;i++)
    {
        if(a[i][0]>max)
        {
            max=a[i][0];
        }
    }*/ 
}
int main(){
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
    printf("\nTa co Ma Tran m x n nhu sau:\n");
    XuatMaTran(a, m, n);
    
    printf("\nGia tri Max cua Ma tran la: %d", TimMax(a, m, n));
}
