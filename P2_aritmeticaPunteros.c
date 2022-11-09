#include <stdio.h>

int main(){
	int a = 10; 
	int *p = &a;
	
	printf("p adress: %d\n",p);
	printf("value at adress that p points to: %d\n",*p);
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Adress p+1 is: %d\n",p+1);
	printf("Value at adress p+1 is %d\n",*(p+1));
	
	
}

