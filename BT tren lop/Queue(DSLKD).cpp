#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef struct Node *queue;
bool isEmpty(queue q){
    return q == NULL; 
}
Node *createNode(int data){// tao node p
    Node *p = new Node();
    if(p == NULL){
        return p;
    }
    p -> next = NULL;
    p -> data = data; //data thu 2 la thu ma ta truyen vao
}
void enQueue(queue &q, int data){
    Node *q = createNode(data);
    if(q == NULL){
        q = p;
    }
    else{
        Node *ptr = q;
        while(ptr != NULL && ptr->next != NULL){ // tim node cuoi cung cua danh sach lk
            ptr = ptr->next;
        }
        // ptr thanh node cuoi cung trong queue
        ptr -> next = p;
    }
}
int peek(queue q){// lay nhung khong xoa
    if(!isEmpty(q)){
        return q ->data;
    }else{
        return 0;
    }
}
int depeek(queue &q){
    if(!isEmpty(q)){
        int data = q->data;
        Node *p = q;
        q = q ->next;//sau khi lay di gan phan tu tiep theo la dau tien
        delete(p); //giai phong bo nho
        return data;
    }else{
        return 0;
    }
}
int main(){
    queue q = NULL;
    enQueue(q,10);
    enQueue(q,100);
    enQueue(q,1000);
    enQueue(q,10000);
    enQueue(q,100000);

    cout<<"Queue rong"<< isEmpty(q) << endl;
    cout<<"Thanh phan dau tien cua Queue ?" << peek(q) << endl;

    while(!isEmpty(q)){
        int data = peek(q);
        deQueue(q);
        cout<<" "<< data << endl;
    }

    cout<<"Queue rong"<< isEmpty(q) << endl;
    return 0;
}