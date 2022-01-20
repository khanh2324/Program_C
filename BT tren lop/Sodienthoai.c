#include<stdio.h>
int arr[50];
void Print(int n){
    
}
int SoTN(int n){
    int i = 1, j = 6;
    while(i <= j){
        if(arr[i] != arr[j])    return 0;
        i++;
        j--;
    }
    return 1;
}
int main(){
    return 0;
}