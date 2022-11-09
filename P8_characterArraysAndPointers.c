/*
How to store strings?
	size of arrays  = numOfCharacters + 1
Rule:  A string in C has null termination  
*/

#include<stdio.h>
#include<string.h>

void print(char c[]); 
//void print(char* c); is equivalent
//Checar por que no puedo imprimir c[20] a traves de print
void print2(char* c);

int main(){
	char c[20]; 
	c[0] = 'M';
	c[1] = 'A';
	c[2] = 'X';
	c[1] = '\0';
	int len = strlen(c); 
	printf("Length: %d\n",len);   
	
	char c2[20] = "Hello"; //string gets stored in the space for array
	//char *c2 = "Hello" //string gets stored as compile time constant
	print2(c2);
}

void print(char c[]){
	int i = 0; 
	while(c[i]!='\0'){
		printf("%c",*(c+i));
		i++;
	}
}

void print2(char* c){
	while((*c) != '\0'){
		printf("%c",*c);
		c++;
	}
	
}
