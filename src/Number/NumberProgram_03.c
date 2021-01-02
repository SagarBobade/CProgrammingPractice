/* Below program accepts number from user and prints whether it is Odd or Even. */

#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

void numberProgram_03() {

	int no;
	BOOL flag = false;

	printf("Enter a Number: ");
	scanf("%d", &no);

	if((isOddEven(no) == true)){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}

BOOL isOddEven( no) {

	if (no % 2 == 0) {
		return true;
	} else {
		return false;
	}
}
