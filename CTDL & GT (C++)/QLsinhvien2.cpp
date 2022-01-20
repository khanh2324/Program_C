#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
//tao cau truc sinh vien
struct date{
    int ngay, thang, nam;
};
struct SinhVien{
    int ma;
    float diem;
    char ten[50];
    struct date ngaysinh;
};
//tao cau truc danh sach don
struct Node{
    SinhVien *data;
    Node *pNext;
};
struct DSdon{
    Node *pHead;
};
//tao danh sach lien ket don
void KhoiTao(DSdon *&list){
    list = new DSdon;
    list->pHead = NULL; //tao list cho den diem cuoi Null
}
//nhap thong tin sinh vien
SinhVien *NhapSinhVien(){
    SinhVien *sv = new SinhVien;
    cout<<"Nhap Ma Sinh vien: ";
    cin>>sv->ma;
    cin.ignore(); //xoa ky tu dau tien trong bo nho dem
    cout<<"Nhap ho ten Sinh Vien: ";
    gets(sv->ten);
    cout<<"Nhap diem tong ket: ";
    cin>>sv->diem;
    cout<<"Nhap ngay sinh: ";
    cin>>sv->ngaysinh.ngay;
    cout<<"Nhap thang sinh: ";
    cin>>sv->ngaysinh.thang;
    cout<<"Nhap nam sinh: ";
    cin>>sv->ngaysinh.nam;
    return sv;
}
//tao node sinh Vien
Node *TaoNode(SinhVien *sv){
    Node *pNode = new Node;
    if(pNode != NULL){
        pNode ->data = sv;
        pNode ->pNext = NULL;
    }else{
        cout<<"Nhap thong tin sinh vien that bai !";
    }
    return pNode;
}
//them node vao cuoi danh sach
void ChenCuoi(DSdon *&list, SinhVien *sv){
    Node *pNode = TaoNode(sv);
    if(list -> pHead == NULL){
        list -> pHead = pNode;
    }else{
        Node *pTmp = list -> pHead;
        while(pTmp -> pNext != NULL){
            pTmp = pTmp -> pNext;
        }
        pTmp-> pNext= pNode;
    }
}
//hien thi danh sach
void PrintList(DSdon *list){
    Node *pTmp = list -> pHead;
    if(pTmp == NULL){
        cout<<"Danh sach sinh vien trong !";
        return;
    }
    while(pTmp != NULL){
        SinhVien *sv=pTmp->data;
        cout<<sv->ma<<"\t"<<sv->ten<<"\t"<<sv->ngaysinh.ngay<<"/"<<sv->ngaysinh.thang<<"/"<<sv->ngaysinh.nam<<"\n";
        pTmp = pTmp -> pNext;
    }
}
//sap xep
void SortList(DSdon *&list){
    for(Node *pTmp = list-> pHead;pTmp != NULL;pTmp=pTmp-> pNext){
        for(Node *pTmp2=pTmp-> pNext;pTmp2 != NULL;pTmp2=pTmp-> pNext){
            SinhVien *svTmp=pTmp ->data;
            SinhVien *svTmp2=pTmp2 ->data;
            if(svTmp2->diem<svTmp->diem){
                float diem = svTmp->diem;
                char ten[50];
                strcpy(ten,svTmp->ten);
                svTmp2->diem=diem;
                strcpy(svTmp2->ten,ten);
            }
        }
    }
}
//xoa phan tu
void RemoveNode(DSdon *&list,int ma){
    Node *pDel= list->pHead;
    if(pDel== NULL){
        cout<<"Danh sach sinh vien trong !";
    }else{
        Node *pPre=NULL;
        while(pDel != NULL){
            SinhVien *sv=pDel->data;
            if(sv->ma==ma){
                break;
            }
            pPre= pDel;
            pDel= pDel-> pNext;
        }
        if(pDel == NULL){
            cout<<"khong tim thay Ma SinhVien: "<<ma;
        }else{
            if(pDel==list-> pHead){
                list -> pHead = list -> pHead->pNext;//gan phan tu dau cho phan tu thu 2
                pDel -> pNext= NULL;
                delete pDel;//xoa bo nho dem cua phan tu
                pDel = NULL;
            }else{
                pPre-> pNext = pDel -> pNext;
                pDel -> pNext= NULL;
                delete pDel;
                pDel = NULL;
            }
        }
    }
}
int main(int argc, char** argv){
    DSdon *list;
    KhoiTao(list);
    SinhVien *teo=NhapSinhVien();
    ChenCuoi(list,teo);
    SinhVien *ty=NhapSinhVien();
    ChenCuoi(list,ty);
    SinhVien *bin=NhapSinhVien();
    ChenCuoi(list,bin);
    PrintList(list);
    SortList(list);
    cout<<"\nDanh sach sau khi sap xep:\n";
    PrintList(list);
    cout<<"Nhap Ma Sinh Vien muon xoa: ";
    int ma;
    cin>>ma;
    RemoveNode(list,ma);
    cout<<"\nDanh sach sau khi xoa:\n";
    PrintList(list);
}