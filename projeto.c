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
	float mult_num = (a*b);
	return mult_num;
}

float div(float a, float b){
	float div_num = a/b;
	return div_num;
}
	
	
int main(){
	float x, y;
	
	int cod;
	


	while(cod != 0){
			
		printf("Digite:\n1 para somar\n2 para subtrair\n3 para multiplicar\n4 para dividir\n");
		scanf("%d", &cod);
	
		switch(cod){
			case 1:
				scanf("%f %f", &x, &y);
				printf("A soma e %f \n", soma(x,y));
				break;
			case 2:
				scanf("%f %f", &x, &y);
				printf("A subtracao e %f \n", sub(x,y));
				break;
			case 3:
				scanf("%f %f", &x, &y);
				printf("A multiplicacao e %f \n", mult(x,y));
				break;
			case 4:
				scanf("%f %f", &x, &y);
				printf("A divisao e %f \n", div(x,y));
				break;
				
			default: 
				printf("Codigo invalido\n");
				break;	
		}
		printf("Digite 0 para sair\n");
	}

	return 0;
}
