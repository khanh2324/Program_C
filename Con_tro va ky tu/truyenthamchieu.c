#include<stdio.h>
//con tro truyen tham chieu
void volume (int *x){
	*x = (*x)*(*x)*(*x);

}
int main()
{
	int x = 5;
	printf("%d\n", x);
	volume(&x);
	printf("%d", x);
return 0;
}

