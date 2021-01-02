/* Below program accepts Text and number from user and prints it. */

void program_03() {

	int no;

	printf("Enter a Number: ");
	scanf("%d", &no);

	if (no % 2 == 0) {
		printf("Even");
	} else {
		printf("Odd");
	}

}
