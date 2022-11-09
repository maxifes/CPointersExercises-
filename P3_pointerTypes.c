#include <stdio.h>

int main(){
	int a = 1025;
	int *p = &a;
	
	printf("Size of integer is %d bytes\n",sizeof(int)); 
	printf("Adress = %d\t value = %d\n",p,*p);
	printf("Adress = %d\t value = %d\n\n",p+1,*(p+1)); //*(p+1) tiene basura
	
	char *pChar; 
	pChar = (char*)p; 
	
	printf("Size of char is %d bytes\n",sizeof(char)); 
	printf("Adress = %d\t value = %d\n",pChar,*pChar);
	printf("Adress = %d\t value = %d\n",pChar+1,*(pChar+1)); //*(p+1) tiene basura 
	
	//1025 = 00000000 00000000 00000100 00000001
	//			0			0		4		1
	
	//void* p no apunta a ningun tipo de dato pero contiene una dirección
	//pero no información acerca de a que tipo de dato apunta
}
