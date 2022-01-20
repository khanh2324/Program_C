#include<stdio.h>
int main()
{
/*	char c;
	c = getchar();
	printf("Lan 1 : %c\nLan 2: ", c);
	char cc = putchar( c);
	printf("\nLan 3: %c", cc); */
	char str[15];
	fgets(str, 15, stdin);// chi nhap vao 15 ky tu
	puts(str);
return 0;
}

