/* Below program swaps 2 numbers without using 3rd variable. */

#include <stdio.h>

void program_05() {

	int a, b, temp;

	printf("Enter Number in A: ");
	scanf("%d", &a);

	printf("Enter Number in B: ");
	scanf("%d", &b);

	printf("\nBefore swap: \nA= %d\n", a);
	printf("B= %d\n", b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swap: \nA=%d\n", a);
	printf("B=%d", b);

}
