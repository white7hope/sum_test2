#include "sum.h"

int sum(int n){
	int i, sum = 0;
	for(i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

