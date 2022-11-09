#include <stdio.h>
void increment(int a);
void incrementByReference(int* a);
int main(){
	int a = 5; 
	increment(a);
	
	printf("Adress in main = %d\t value in main = %d\n\n",&a,a);
	
	incrementByReference(&a);
	
	printf("Adress in main = %d\t value in main = %d\n",&a,a);
	  
}

void increment(int a){
	a = a + 1; 
	printf("Adress in increment = %d\t value in increment = %d\n",&a,a);
}

void incrementByReference(int* a){
	*a = *a + 1; 
	printf("Adress in incrementByReference = %d\t value in incrementByreference = %d\n",a,*a);
}
