#include "part3.h"

int sum(int arr[], int length){
	int sum = 0;
	int i = 0;
	while(i < length){
		sum += arr[i];
		i++;
	}
	return sum;
}
