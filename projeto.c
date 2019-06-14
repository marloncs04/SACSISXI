#include <stdio.h>

	
int soma(float a, float b){
	int soma_num = a + b;
	return soma_num;
}	
	
	
	
int main(){
	float x, y;

	printf("Digite dois numeros para serem somados:\n");
	scanf("%f %f", &x, &y);

	printf("A soma é %d \n", soma(x,y));

	

	return 0;
}
