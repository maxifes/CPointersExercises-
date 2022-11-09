#include <stdio.h>

int main(){
	int a; //&a = 6487572
	int* p; //int pointer p
	
	a = 12; //a = 12
	p = &a; //p = 6487572; *p = 12
	
	printf ("%d\n",p); //6487572
	printf ("%d\n",&a); //6487572
	printf ("%d\n",*p); //12
	
	printf ("%d\n",p+1); //6487572 + 1*sizeof(int) = 6487572 + 4 bytes = 6487576
	printf ("%d\n",(*p)+6); //12+6 = 18
	printf ("%d\n",*(p+6)); //*(6487572 + 6*sizeof(int)) probably trash stored in pointed memory location 

} 
