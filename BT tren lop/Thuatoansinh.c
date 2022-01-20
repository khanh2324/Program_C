#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int i;
int Stop = 0;
int arr[100];
void First(int n){
    for(i = 1; i <= n; i++){
        arr[i] = 0;
    }
}
int ThuanNghich(int n){
    int i = 1, j = n;
    while(i < j){
        if(arr[i] != arr[j])    return 0;
        i++;
        j--;
    }
    return 1;
}
bool SNT(int n){
   if(n < 2) {
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}
int main(){
    int n;
    printf("Nhap n chu so : ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        	if(ThuanNghich == 1 && SNT(i)){
            	printf("%10d", arr[i]);
        }
	}
}
