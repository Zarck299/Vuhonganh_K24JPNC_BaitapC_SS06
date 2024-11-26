#include<stdio.h>
   int main () {
   	int number[5];
   	int Sochan=0, Sole =0;
   	printf("Print 5 intergers: ");
   	for (int i=0;i<5;i++) {
   		printf("Number %d: ", i+1);
   		scanf("%d", &number[i]);
   		if (number[i] % 2 == 0) {
            Sochan++; 
        } 
		else {
            Sole++;
    }
	   }
	   printf("Count of Sochan: %d\n", Sochan);
    printf("Count of Sole: %d\n", Sole);

    return 0;
}
