#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j, var;
	printf("Nhap a > 0: ");
	scanf("%d", &a);
	printf("Nhap b > a: ");
	scanf("%d", &b);
	printf("So nguyen to trong pham vi tu %d den %d la:\n", a, b);
	for(i=a+1; i<b; ++i)
   	{
    	var=0;
    	for(j=2; j<=i/2; ++j)
    	{
        	if(i%j==0)
         	{
            	var=1;
            	break;
         	}
      	}
      if(var==0)
         printf("%d ",i);
  	}
	return 0;
}


