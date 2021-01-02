/* Below program accepts number from user and prints whether it is Odd or Even. */

void NumbeProgram_03() {

	int no;

	printf("Enter a Number: ");
	scanf("%d", &no);

	if (no % 2 == 0) {
		printf("Even");
	} else {
		printf("Odd");
	}

}
