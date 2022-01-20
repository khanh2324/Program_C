#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int arr[20];
int Stop = 0;
// Buoc 1: Khoi tao gia tri dau tien
// Buoc 2: In ra gia tri da khoi tao
// Buoc 3: Khoi tao gia tri tiep theo cho den dieu kien dung 

void First(int n){
    int i;
    for(i = 1; i <= n; i++)    arr[i] = 0; //khoi tao so ban dau = 0
    if(n > 1)   arr[1] = 1;
}
void Next(int n){
    int i = n;
    while(i > 0 && arr[i] == 9){
        arr[i] = 0; // nhay so khi so cuoi = 9
        i--;
    }
    if(i > 0){
        arr[i]++;
    }else{
        Stop = 1;
    }
}
int ThuanNghich( int arr[], int n){
    int i = 1, j = n;
    while(i <= j){
        if(arr[i] != 0 && arr[j])    return 0;
        i++;
        j--;
    }
    return 1;
}

int ChuyenMang(int arr[], int n){
    long Number = 0;
    int i, p = 1;
    for(i = n-1; i >= 0; i--){//cong don tu duoi len
        Number += arr[i] * p;
        p *= 10;
    }
    //ktra So Nguyen To
    if(Number < 2)   return 0;
    for(i = 2; i <= sqrt(Number); i++){
        if(Number % i == 0)     return 0;
    }
    return 1;
}
void Print(int n){
    int i;
    if(ThuanNghich(arr, n) == 1 && ChuyenMang(arr, n) == 1){
        for(i = 1; i <= n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
void AllArr(int n){
    First(n);
    while(Stop != 1){
        Print(n);
        Next(n);
    }
}
int main(){
    int n;
    printf("Nhap N chu so cua K: ");
    scanf("%d",&n);
    AllArr(n);
    return 0;
}
