#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,aux;
	a = 5; b = 8;
	printf("a=%d si b=%d\n",a,b); 
	aux = a;
	a = b;
	b = aux;
	printf("a=%d  si b=%d\n",a,b);
	return 0;


}
