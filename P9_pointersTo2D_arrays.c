// Pointers and multi-dimensional arrays 

#include <stdio.h>
int sumaInterna(int (*a)[3],int *suma){
}
int main(){
	int a[2][3] = {{1,2,3},{4,5,6}}; //Reserva memoria para dos vectores de 3 enteros cada uno
	int (*pA)[3] = a; //Apunta a vectores de 3 enteros. 
	int suma[2];	

	printf("%d\n",**a);
	printf("%d\n",**(a+1));
}
