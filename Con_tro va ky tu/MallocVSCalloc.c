#include<stdio.h>
#include<stdlib.h>
/*---------Nội dung                         Calloc                                                      Malloc
--------Khoi tao gia tri                    Co (= 0)                                                    Khong
--------So luong tham so                    2 (So luong cac phan tu & kich thuoc kieu )                 1 (kich thuoc cua vung nho can cap phat)
-Dac diem chung: Tra ve con tro toi dau vung nho duoc cap phat hoac NULL trong truong hop khong thuc hien duoc viec cap phat*/

void showInfo(int *a){
    for(size_t i=0; i < 10; i++){
        printf("%5d", a[i]);
    }
    printf("\n");
}

int main(){
    //malloc:
    puts("Use malloc: ");
    int *a = (int*)malloc(10 * sizeof(int)); //dung malloc ta phai ep kieu cho malloc (int*)
    showInfo(a);
    free(a); //ham giai phong bo nho sau khi da cap phat
    //calloc
    puts("Use calloc: ");
    a = calloc(10, sizeof(int));
    showInfo(a);
    free(a);
    return 0;
}