//Arrays as function argumets
//You always need to pass the array size as a function argument too

#include <stdio.h>

int sumOfElements(int* A, int sizeA);

int main(){
	int A[5] = {1,2,3,4,5}; 
	int sum = sumOfElements(A,(sizeof(A)/sizeof(A[0])));
	printf("The sum of the array elements is = %d\n",sum);
	return 0; 
}

int sumOfElements(int* A, int sizeA){
	int i = 0;
	int sum = 0; 
	
	/*
	for(i=0;i<=sizeA-1;i++){
		sum = sum + *A;
		A++; 
	}
	*/
	
	
	for(i=0;i<=sizeA-1;i++){
		sum = sum + A[i];
	}
	
	return sum; 
}
