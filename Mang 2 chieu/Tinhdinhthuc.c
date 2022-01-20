#include<stdio.h>

int i,j; 
void NhapMaTran(int a[][100], int n)
{
   	for(i = 0; i < n; i++)
     	 for(j = 0; j < n; j++)
      	{
         	printf("Hang [%d] Cot [%d] = ", i + 1, j + 1);
         	scanf("%d", &a[i][j]);
      	}
}
 
void XuatMaTran(int a[][100], int n)
{
   	for(i = 0; i < n; i++)
  	{
      	for(j = 0; j < n; j++)
       		printf("%d\t", a[i][j]);
      		printf("\n");
   }
}
int DinhThuc(int a[][100], int n){
    int k,dem = 0,kt;
    float b[100],h,det = 1,c[100];
    for(i = 0;i < n-1;i++)
    {
      	if(a[i][i] == 0){
      		kt = 0;
      	for(j = 0;j < n;j++)
          	if(a[i][j] != 0){
            	for(k = 0;k < n;k++){// Doi cot j voi cot i
             		c[k] = a[k][i];
                	a[k][i] = a[k][j];
                	a[k][j] = c[k];
              	}
            dem++;// dem so lan doi cot
            kt++;// Kiem tra xem co so 0 o dong i cot j
            break;
          	}	
      	}
    if(kt == 0) return 0;
    b[i] = a[i][i];
    for(j = 0;j < n;j++)	a[i][j] = a[i][j]/b[i];//tao so 1 o dong i,cot i
    for(j = i + 1;j < n;j++)
    {
      	h = a[j][i];
      	for(k = 0;k < n;k++) a[j][k] = a[j][k] - h*a[i][k];//lay dong thu j-h*dong i
    }
    }
	b[n-1] = a[n-1][n-1];
	for(i = 0;i < n;i++)	det = det*b[i];// Nhan cac so da lay ra ngoai dinh thuc
	if(dem % 2 == 0)	return det;
	else return -det;
}
int main()
{
	int a[100][100];
    int n;
    do
	{
    	printf("Nhap so he so n cua ma tran = ");
		scanf("%d",&n);
    	printf("\nNhap vao ma tran:\n");
    	if(n <= 0 || n > 100){
    		printf("\nVui long nhap lai !\n");
		}
	}while(n <= 0 || n > 100);
    
    NhapMaTran(a, n);
    printf("\nTa co Ma Tran A nhu sau \n");
    XuatMaTran(a, n);
    int sum = DinhThuc(a, n);
    printf("\nDinh thuc ma tran A = %d", sum);
return 0;
}

