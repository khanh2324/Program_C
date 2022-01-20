#include  <stdio.h>
#include  <stdlib.h>
int a[100], b[100], n, count = 0;
void Nhap(){
    int i;
    printf("\n Nhap n = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        b[i] = 1; 
    }
}
void KetQua(){
    int i; count++;
    printf("\nTa co hoan vi thu %d:", count);
    for (i = 1; i <= n; i++){
        printf("%3d",a[i]);
    }
}
void Thu(int i){
    int j;
    for (j = 1; j <= n; j++){
        if (b[j]){
            a[i] = j;
            b[j] = 0;
            if (i == n) KetQua();
            else Thu(i + 1);
        b[j] = 1;
        }
    }
}
int main(){
    Nhap();
    //int *x = new int[n]  cap phï¿½t bo nho cho con tro thuoc kieu int
    //double *arr = new double[5];
    //delete[] arr; giai phong mang ar da dk cap phat o tren
    Thu(1);
    return 0;
}
