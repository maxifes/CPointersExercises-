//Dynamic memory
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	int n,i;  
	printf("Enter size of array\n");  
	scanf("%d",&n);
	int *A = (int*)malloc(n*sizeof(int)); 
	//int *A = (int*)calloc(n,sizeof(int)); 
	for(i=0;i<(n/2);i++){
		A[i] = i+1;
	}
	int *B = (int*)realloc(A,n*2*sizeof(int));
	printf("Prev block adress = %d, new address = %d\n",A,B);
	for(i=0;i<n*2;i++)
		printf("%d\n",A[i]);
}
