#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2;
	float delta;
	printf("Nhap a : ");
	scanf("%f", &a);
	printf("Nhap b : ");
	scanf("%f", &b);
	printf("Nhap c : ");
	scanf("%f", &c);
	delta = (b)*(b)- 4*(a)*(c);
	if(delta > 0){
       	x1 = (-b + sqrt(delta)) / (2*a);
       	x2 = (-b - sqrt(delta)) / (2*a);
       	printf("Phuong trinh da cho co hai nghiem phan biet\nx1= %f \nx2= %f",x1,x2);
    }
    else if(delta == 0){
    	x1 = x2 = -b/(2*a);
    	printf("Phuong trinh da cho co nghiem kep x1 = x2 = %f",x1);
		}
   	else{
        printf("\nPhuong trinh da cho vo nghiem !");
    }
return 0;
}

