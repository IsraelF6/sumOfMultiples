/********************
  Israel Felhandler
	   7/5/18
*********************/

#include <stdio.h>

int sumofmultiples(int x) {
	int sum = 0;
	for (int i=1; i<x; i++) {
		if(i%3==0 || i%5==0)
			sum += i;
	}
	return sum;
}

/* Driver function */
int main(){
	int failed = 0;

    int test = 10;
    int sum = sumofmultiples(test);
    if (sum!=23) {
    	printf("Test 1 failed. Output: %d, Expected: 23\n", sum);
    	failed++;
    }

    int test2 = 11;
    int sum2 = sumofmultiples(test2);
    if (sum2!=33){
    	printf("Test 2 failed. Output: %d, Expected: 33\n", sum2);
    	failed++;
    }

    int test3 = 9;
    int sum3 = sumofmultiples(test3);
    if (sum3!=14){
    	printf("Test 3 failed. Output: %d, Expected: 14\n", sum3);
    	failed++;
	}

	if (failed==0)
		printf("All tests passed!\n");
	else
		printf("Number of tests failed: %d\n", failed);

    return 0;
}