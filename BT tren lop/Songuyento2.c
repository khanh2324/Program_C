#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// Bai 4
bool ktraNgto(int);
bool csNgto(int);
bool tongCs(int);
bool tichCs(int);
//bool NoR(int); // kiem tra khong co r trong cs cua K
int p,q,r;
void Nhap(){
    printf("Nhap so P duoc K chia het: ");
    scanf("%d",&p);
    printf("Nhap Q : ");
    scanf("%d",&q);
    printf("Nhap so R khong co trong K: ");
    scanf("%d",&r);
}
int main() {
	int i;
    Nhap();
    printf("Cac so thoa man yeu cau la:\n");
	for(i = 10000; i <= 99999; i++) {
		if(csNgto(i) && ktraNgto(i) && tongCs(i) && tichCs(i) && NoR(i) == 1) {
			printf("%10d", i);
		}
	}
	return 0;
}
bool ktraNgto(int n) {
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
bool tongCs(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	if(sum % p == 0) {
		return true;
	}
	return false;
}
bool tichCs(int n) {
    int volume = 0;
    while(n > 0) {
        volume *= n % 10;
        n /= 10;
    }
    if(volume % q == 0) {
        return true;
    }
    return false;
}
int NoR(int n){
    int i = 1, j = 5;
    while(i <= j){
    	if(i == r || j == r)	return 0;
    	i++;
    	j--;
	}
    return 1;
}
bool csNgto(int n) {
	int c;
	while(n > 0) {
		c = n % 10;
		n /= 10;
		if(!ktraNgto(c)) {
			return false;
		}
	}
	return true;
}

