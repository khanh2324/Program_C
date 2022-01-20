#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int a[20];
int i;
bool Ok(int x2,int y2){
    for( i = 1; i < x2 ;i++)
        if(a[i] == y2)
            return false;
    return true;
}
 
void Xuat(int n){
    for(i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i,int n){
	int j;
    for(j = 1;j<=n;j++){
        if(Ok(i,j)){
            a[i] = j;
            if(i==n) Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n = 8;
    Try(1,n);
    return 0;
}
