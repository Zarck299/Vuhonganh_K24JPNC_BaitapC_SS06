#include<stdio.h>
#include<math.h>
  int main(){
  	float a,b,c;
  	float delta, X1,X2;
  	printf("Hay nhap he so a: \n");
  	scanf("%f", &a);
  	printf("Hay nhap he so b: \n");
  	scanf("%f", &b);
  	printf("Hay nhap he so c: \n");
  	scanf("%f", &c);
  	delta = b*b - 4*a*c ;
  	if (delta > 0){
  		X1=(-b + sqrt(delta))/ 2*a;
  		X2=(-b - sqrt(delta))/ 2*a;
  		printf("Phuong trinh co 2 nghiem la %f va %f\n");
  		scanf("%f", &X1, &X2);
	  }
	  else if (delta=0) {	  
	  X1=X2=-b/2*a;
	  printf("Phuong trinh co nghiem kep %f\n");
	  scanf("%f", &X1); 
	  }
	  else {
	  	printf("Phuong trinh vo nghiem\n");
	  }

  }
