#include <stdio.h>
//Bieu thuc: P(x)= a[n]*X^n + a[n-1]*X^[n-1] +...a[1]*X + a[0]
//Bieu thuc: Q(x)= b[n]*X^n + b[n-1]*X^[n-1] +...b[1]*X + b[0]
//tinh tong cua P(x) + Q(x)
void nhap(int *a, int *b, int *n) {
	*n = -1;
	while(*n < 0) {
		printf("Nhap n >= 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i <= *n; i++) {
		printf("\na%d = ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i <= *n; i++) {
		printf("\nb%d = ", i);
		scanf("%d", &b[i]);
	}
}
double tinhGTBT1(int *a, int n, double x) {
	double kqP = a[0];
	int i;
	double xMuI = 1;
	for(i = 1; i <= n; i++) {
		xMuI *= x;
		kqP += a[i] * xMuI;
	}
	return kqP;
}
double tinhGTBT2(int *b, int n, double x) {
	double kqQ = b[0];
	int i;
	double xMuI = 1;
	for(i = 1; i <= n; i++) {
		xMuI *= x;
		kqQ += b[i] * xMuI;
	}
	return kqQ;
}
int main()
{
	int n;
	int a[101];
	int b[101];
	double sum = 0;
	nhap(a, b, &n);
	double x;
	printf("Nhap x: ");
	scanf("%lf", &x);
	double kqP = tinhGTBT1(a, n, x);
	double kqQ = tinhGTBT2(b, n, x);
	sum = kqP + kqQ;
	printf("\nTong S(x) cua P(x) va Q(x) la: %lf", sum);
return 0;
}

