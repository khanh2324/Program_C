#include<iostream>
#include<string>
using namespace std;
void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}
void bubbleSort(int arr[], int n){// noi nhung phan tu nho nhat len truoc (0(n^2))
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            if(arr[j] < arr[j - 1]){
                swap(&arr[j], &arr[j - 1]);
            }
        }
    }
}
void bubbleSort2(int arr[], int n){// noi nhung phan tu lon nhat len truoc (0(n^2))
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            if(arr[j] > arr[j - 1]){
                swap(&arr[j], &arr[j - 1]);
            }
        }
    }
}
void output(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int main(){
    int arr[] = {4,3,7,6,5,4,9,8,2,1,25,56,28};
    int length = sizeof(arr) / sizeof(int);
    bubbleSort(arr, length);
    output(arr, length);
    cout<<"Sap xep giam dan(cac phan tu lon noi len truoc):"<< endl;
    bubbleSort2(arr, length);
    output(arr, length);
    return 0;
}