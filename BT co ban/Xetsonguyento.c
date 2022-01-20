#include <stdio.h>
#include <math.h>
int NhanXet(int n){
	int i;
	if(n <= 1){
        return 0;
    }else{
        for(i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Nhap n > 0: ");
    scanf("%d",&n);
    if(NhanXet(n) == 0){
		printf("%d khong phai la so nguyen to !", n);
	}else{
    	printf("%d la so nguyen to !", n);
	}
    return 0;
}
