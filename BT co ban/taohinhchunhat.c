#include<conio.h>
#include<stdio.h>
int main()
{
    int n,m;
    int i, k;
    printf("Nhap m: ");
    scanf("%d",&m);
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n <= 0 || m <= 0;)
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
    } return 0;
}

