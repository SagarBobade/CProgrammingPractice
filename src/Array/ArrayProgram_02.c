/* Below program accepts size of an array. Accepts array elements and prints them in reverse order. */

#include <stdio.h>
#include<stdbool.h>

void arrayProgram_02() {

	int size = 0;

	printf("Enter size of an array: ");
	scanf("%d", &size);

	int arr[size];

	for (int i = 0; i < size; i++) {
		printf("Element no. ", i + 1,":");
		scanf("%d", &arr[i]);
	}

	printf("Printing Array in reverse order-> ");
	for (int i = size-1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

}
