/* Below program accept a number and print its addtion of digits. */

#include <stdio.h>
#include<stdbool.h>

void program_09() {

	int a, d;
	int ans = 0;
	bool flag = true;

	printf("Enter Number: ");
	scanf("%d", &a);

//	if (flag == true) {
//		flag=false;
		while (ans >= 9) {
			while (a != 0) {
				d = a % 10;
				ans = ans + d;
				a = a / 10;
			}
			printf("%d", ans);
		}
//	}
}
