#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max;
    printf("Nhap a = ");
    scanf("%d",&a);
    printf("\nNhap b = ");
    scanf("%d",&b);
    printf("\nNhap c = ");
    scanf("%d",&c);
    max = a; 
    if( b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    printf("Gia tri lon nhat trong 3 so la: %d", max);
    getch();
}

