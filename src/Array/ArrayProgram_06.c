/* Below program accepts size of an array. Accepts array elements and make copy of them in another array. */

#include <stdio.h>

void arrayProgram_06() {

	int size = 0;
	int arr[size];
	int arr2[size];

	printf("Enter size of an array: ");
	scanf("%d", &size);

	acceptArrayOf(&arr, size);
	printArray(&arr, size);
	copyArray(&arr, &arr2, size);
	printArray(&arr2, size);
}

acceptArrayOf(const int *arr, int size) {

	for (int i = 0; i < size; i++) {
		printf("Element no. %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
}

printArray(const int *arr, int size) {

	printf("Printing Array-> ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("");
}

copyArray(int *arr, int *arr2, int size) {

	for (int i = 0; i < size; i++) {

		arr2[i] = arr[i];

	}

}
