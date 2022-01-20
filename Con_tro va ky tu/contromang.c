#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int *ptr = arr;
	int i;

	printf("\nDia chi cua mang :%x", arr);
	printf("\nDia chi cua arr[0] :%x", &arr[0]);
	printf("\nGia tri cua ptr :%x", ptr);
	for(i = 0; i < 5;i++){
		printf("%5d", arr[i]);
	}
	printf("\n");
//	for(i = 0; i < 5; i++){
//		printf("%5d", *(ptr+i));
//	}

	ptr = 3000;
	//++ptr; ptr = ptr +(1*4)=3000 + 4= 3004
	//++ptr; ptr = ptr +(1*4)=3004 + 4= 3008
	ptr += 5;
	
	//ptr + 5*4 = ptr + 20 = 3020;//dia chi k phai gia tri
	for(; ptr <= &arr[4]; ptr++){
		printf("%5d", *ptr);
	}
return 0;
}

