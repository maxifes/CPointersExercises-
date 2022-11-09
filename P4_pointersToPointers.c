//pointersToPointers

#include <stdio.h>

int main(){
	int x = 5;
	int *p = &x;
	
	*p = *p + 10; 
	
	int** q = &p; //Contiene la dirección del puntero p 
	int*** r = &q; //Contiene la dirección del puntero q
	
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",q);
	printf("%d\n",**q);
	printf("%d\n",r);
	printf("%d\n",**r);
	
	***r = *p - 10;
	printf("x = %d\n",x); 
	
}
