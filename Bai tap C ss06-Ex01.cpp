#include<stdio.h>
   int main () {
   	int a,b,c,d,e,sum;
   	printf("Hay nhap vao so thu nhat: ");
   	scanf("%d", &a);
   	printf("\nHay nhap vao so thu hai: ");
   	scanf("%d", &b);
   	printf("\nHay nhap vao so thu ba: ");
   	scanf("%d", &c);
   	printf("\nHay nhap vao so thu tu: ");
   	scanf("%d", &d);
   	printf("\nHay nhap vao so thu nam: ");
   	scanf("%d", &e);
   	sum = a + b + c + d + e;
   	printf("Tong %d+%d+%d+%d+%d = %d", a,b,c,d,e,sum);
   	return 0;
   }
