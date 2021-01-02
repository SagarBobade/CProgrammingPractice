/* Below program accepts size of an array. Accepts array elements and Adds them. */

#include <stdio.h>
#include<stdbool.h>

void program_14() {

	int size, sum = 0;

	printf("Enter size of an array: ");
	scanf("%d", &size);

	int arr[size];

	for (int i = 0; i < size; i++) {
		printf("Element no. ", i + 1, ":");
		scanf("%d", &arr[i]);
	}

	printf("Printing Array-> ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}

	printf("Addition of all elements of an array: %d", sum);
}
