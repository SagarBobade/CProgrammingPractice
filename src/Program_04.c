/* Below program accepts Text and number from user and prints it. */

#include <stdio.h>

void program_04() {

	int a, b, temp;

	printf("Enter Number in A: ");
	scanf("%d", &a);

	printf("Enter Number in B: ");
	scanf("%d", &b);

	printf("\nBefore swap: \nA= %d\n", a);
	printf("B= %d\n", b);

	temp = a;
	a = b;
	b = temp;

	printf("After swap: \nA=%d\n", a);
	printf("B=%d", b);

}
