/* Below program swaps 2 numbers without using 3rd variable. */

#include <stdio.h>

void program_05() {

	int no1, no2, temp;

	printf("Enter Number in A: ");
	scanf("%d", &no1);

	printf("Enter Number in B: ");
	scanf("%d", &no2);

	printf("\nBefore swap: \nA= %d\n", no1);
	printf("B= %d\n", no2);

	no1 = no1 + no2;
	no2 = no1 - no2;
	no1 = no1 - no2;

	printf("After swap: \nA=%d\n", no1);
	printf("B=%d", no2);

}
