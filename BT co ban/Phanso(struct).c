#include <stdio.h>
#include <math.h>
typedef struct PhanSo{
    int tu;
    int mau;
} PS; //khai bao tu & mau va co the goi qua PS
/*struct PhanSo{
	int tu;
	int mau;
}; 
typedef struct PhanSo PS; tuong duong voi cai phia tren*/
struct PhanSo nhap() {
	struct PhanSo p;
	printf("Nhap tu so: ");
	scanf("%d", &p.tu);
	while(1) {
		printf("Nhap mau so khac 0: ");
		scanf("%d", &p.mau);
		if(p.mau != 0) {
			break;
		}
	}
	return p;
}

int ucln(int a, int b) {
	a = abs(a);
	b = abs(b);
	while(a != b){
		if(a > b) {
			a = a - b;
		} else {
			b -= a;
		}
	}
	return a;
}
struct PhanSo rutGon(struct PhanSo p ) {
	if(p.tu != 0) {
		int u = ucln(p.tu, p.mau);
		p.tu = p.tu / u;
		p.mau /= u;
	}
	return p;
}
PS cong(PS a, PS b)
{
    PS c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    c = rutGon(c);
    return c;
}
int Bcnn(int a, int b){
	int u = ucln(a, b);
	return a * b / u;
}
int main(){
	PS c;
	struct PhanSo a = nhap();
	a = rutGon(a);
	printf("Ta co phan so thu nhat la: %d/%d\n", a.tu, a.mau);
	struct PhanSo b = nhap();
	b = rutGon(b);
	printf("Ta co phan so thu hai la: %d/%d", b.tu, b.mau);
	printf("\nTong cua hai phan so = ");
    c = cong(a, b);
	printf("%d/%d", c.tu, c.mau);
	return 0;
}

