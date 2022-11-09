//pointers to Arrays
#include <stdio.h>
//int A[5]
//int *p 
//p= A
//Print A = Print p (output = an adress)

/*
Elements at index i
Address - &A[i] or (A+i) 
Value   -  A[i] or *(A+i)

*/


int main(){
	int A[] = {2,3,5,8,1}; 
	printf("%d\n",A);
	printf("%d\n",&A[0]);
	printf("%d\n",A[0]);
	printf("%d\n",*A);
}
