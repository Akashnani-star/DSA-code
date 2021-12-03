#include<stdio.h>
#include<stdbool.h>

float one = 1.0f;
bool isTrue = false;

void isPowerOfTwo1(float n){
	if (((float)(n/2)) == one){
		isTrue = true;
		return;
	}
	else if (((float)(n/2)) < one){
		return;
	}
	isPowerOfTwo1(n/2);
}

bool isPowerOfTwo(int n){
	if(n == 1)
		return true;
	if(n > 10000000){
		printf("Recursion stack may exceeds the limit ....\n\
		not sure for the result...\n");
	}
	isPowerOfTwo1(n);
	if(isTrue == true){
		isTrue = false;
		return true;
	}else{
		return false;
	}
}
