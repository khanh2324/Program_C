#include<stdio.h>
#include<math.h>
int i,j,n;
int a[10];
void Nhap(){
    printf("\n Nhap n = ");
    scanf("%d", &n);
}
void KQ(){
    for (i = 0; i < n; i++){
        printf("%5d",a[i]);
        printf("\n");
    }
}
void tim(int i)
{
    for(j = 0;j <= 1;j++)
    {
        a[i]=j;
        if(i==n-1)   
            KQ();
        else
            tim(i+1);
    }
}
 
int main(){
    Nhap();
    printf("\nTa co day nhi phan:\n");
    tim(0);
}
