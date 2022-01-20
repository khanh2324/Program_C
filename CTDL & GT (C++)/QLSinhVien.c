#include<stdio.h>
#include<string.h>
struct date{
    int ngay, thang, nam;
};
typedef struct SinhVien{
    int ma;
    float diem;
    char ten[50];
    struct date ngaysinh;
} sv;
//tao cau truc ds lien ket don
struct SinhVien nhap(){
    struct SinhVien p;
    fflush(stdin);
    printf("Nhap Ma Sinh Vien: ");
    scanf("%d", &p.ma);
    printf("Nhap ho va ten sinh vien: ");
    gets(p.ten);
    printf("Nhap diem tong ket hoc ky: ");
    scanf("%.1f", &p.diem);
    printf("Nhap ngay sinh: ");
    scanf("%d", &p.ngaysinh.ngay);
    printf("Nhap thang sinh: ");
    scanf("%d", &p.ngaysinh.thang);
    printf("Nhap nam sinh: ");
    scanf("%d", &p.ngaysinh.nam);
    return p;
};
struct Node{
    struct SinhVien *data;
    struct Node *pNext;
};
struct DSdon{
    struct Node *pHead;
};
void KhoiTao(struct DSdon *&list){
    list = new DSdon;
    list -> pHead = NULL;
}
