#include <stdio.h>

int main() {
    int num1, num2, num3;
    int menorNumero, numeroDoMeio, maiorNumero, temp;

    // Ler os tr�s n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &menorNumero);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numeroDoMeio);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &maiorNumero);

    // Ordenar os n�meros
    
	if (menorNumero > maiorNumero){
    	temp = menorNumero;
    	menorNumero = maiorNumero;
    	maiorNumero = temp;
	}
	
	if (menorNumero > numeroDoMeio) {
    	temp = menorNumero;
    	menorNumero = numeroDoMeio;
    	numeroDoMeio = temp;
    }
    
	if (numeroDoMeio > maiorNumero){
		temp = maiorNumero;
    	maiorNumero = numeroDoMeio;
    	numeroDoMeio = temp;
	}
	
    // Exibir os n�meros em ordem crescente
    printf("Os n�meros em ordem crescente s�o: %d, %d, %d\n", menorNumero, numeroDoMeio, maiorNumero);

	return 0;
}
