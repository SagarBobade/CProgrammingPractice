/* Below program accepts size of an array. Accepts array elements and prints them. */

#include <stdio.h>
#include<stdbool.h>

void program_12() {

	int size = 0;

	printf("Enter size of an array: ");
	scanf("%d", &size);

	int arr[size];

	for (int i = 0; i < size; i++) {
		printf("Element no. ", i + 1,":");
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

}
