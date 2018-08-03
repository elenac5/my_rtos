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
	
	for (a=0; a<6; a++) //Elena added these 2 following lines
		printf("Elena is printing: %d", a);
	return 0;

}
