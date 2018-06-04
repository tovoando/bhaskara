#include <stdio.h> //biblioteca de entrada e saida
#include <stdlib.h> //biblioteca de funcoes
#include <math.h> //biblioteca para funcoes matematicas

int main() //funcao principal
{
    float a, b, c, delta, x1, x2, raiz; //declaracao de variaveis

	printf("Digite o valor do coeficiente a: "); //mostra em tela o que deve ser coletado
	scanf("%f", &a); //leitura da entrada
	printf("Digite o valor do coeficiente b: "); //mostra em tela o que deve ser coletado
	scanf("%f", &b); //leitura da entrada
	printf("Digite o valor do coeficiente c: "); //mostra em tela o que deve ser coletado
	scanf("%f", &c); //leitura da entrada

	delta = (pow(b, 2)) - (4 * a * c); //calculo do delta
	
	if (a == 0) //se a for 0 nao existe funcao de segundo grau
	{
		printf("Nao e uma funcao de segundo grau\n"); //mostra na tela a mensagem que nao possui funcao de segundo grau
	}
	
	else if (delta >= 0) //senao se delta for maior que 0 ele mostra as duas raizes reais
	{
		raiz = sqrt(delta); //calculo da raiz
		x1 = (-b + raiz) / (2 * a); //calculo do x1
		x2 = (-b - raiz) / (2 * a); //calculo do x2
		
		printf("As raizes reais sao:\nx1 = %.2f\nx2 = %.2f\n", x1, x2); //mostra na tela os valores de x1 e x2
	}

	else //senao para demais casos (se delta for menor que 0) ele nao possui raizes reais
	{
		printf("Nao possui raizes reais\n"); //mostra na tela a mensagem que nao possui raizes reais
	}

	printf("\n"); //pula uma linha
	system("pause"); //da uma pausa no programa

	return 0; //por se tratar de uma funcao inteira significa que a funcao esta ok
}