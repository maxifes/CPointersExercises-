#include <stdlib.h>
#include <stdio.h>

void HelloWorld(){
	printf("Hello world\n");
}

int* Add(int* a, int*b){
	/*
	int *c = (int*)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c
	*/
	
	int c = (*a) + (*b); 
	return &c; 
}
int main(){
	int a  = 2, b=4; 
	int* ptr = Add(&a,&b);
	HelloWorld();
	printf("Sum = %d\n",*ptr); 
	/*
Lo que pas� aqu� es que una vez que se ejecuta la funci�n Add la memoria reservada en el stack para esa funci�n y sus variables se pierde. 
�C�mo se corrige? Almacenando los datos que queremos en el heap por medio de malloc

	*/
}
