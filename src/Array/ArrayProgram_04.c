/* Below program accepts size of an array. Accepts array elements and finds smallest and largest. */

#include <stdio.h>

void arrayProgram_04() {

	int size = 0;
	int smallest, largest, temp = 0;

	printf("Enter size of an array: ");
	scanf("%d", &size);

	int arr[size];

	for (int i = 0; i < size; i++) {
		printf("Element no. ", i + 1, ":");
		scanf("%d", &arr[i]);
	}

	smallest = largest = temp = arr[0];

	printf("Printing Array-> ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	for (int i = 0; i < size; i++) {
		temp = arr[i];
		if (temp < smallest) {
			smallest = temp;
		} else if (temp > largest) {
			largest = temp;
		}
	}

	printf("Smallest element from an array: %d\n", smallest);
	printf("Largest element from an array: %d\n", largest);

}
