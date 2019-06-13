#include <stdio.h>

	
float soma(float a, float b){
	float soma_num = a+b;
	return soma_num;
}	
	
float sub(float a, float b){
	float sub_num = a-b;
	return sub_num;
}

float mult(float a, float b){
	float mult_num = a*b;
	return mult_num;
}
	
	
int main(){
	float x, y;
	
	int cod;
	
	printf("Digite 1 para somar\n2 para subtrair\n3 para multiplicar\n");
	scanf("%d", &cod);
	
	switch(cod){
		case 1:
			scanf("%f %f", x, y);
			printf("A soma é %d \n", soma(x,y));
			break;
		case 2:
			scanf("%f %f", &x, &y);
			printf("A subtracao e %d \n", sub(x,y));
			break;
		case 3:
			scanf("%f %f", &x, &y);
			printf("A multiplicacao e %d \n", mult(x,y));
			break;
			
		default: 
			printf("Codigo invalido\n");
			break;	
	}
	

	return 0;
}
