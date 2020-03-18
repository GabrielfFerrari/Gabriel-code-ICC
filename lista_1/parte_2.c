#include<stdlib.h>
#include<stdio.h>
void main(){
	int quest, i, num3;
	float num, num1, sum, media;
	printf("0) Média aritmética de três números quaisquer\n");
	printf("1) Obter os seguintes dados: dividendo, divisor, quaociente, resto , de dois números inteiros\n");
	printf("2) Obter a área de um triangulo através da entrada dos valores de base e altura do triângulo. \n\n");
	printf("Insira o item que deseja ver a resolução, qualquer outro número cancela: ");
	scanf("%d",&quest);
	while (quest < 3 ){
		if (quest == 0 ){
				sum = 0;
				for(i = 0; i < 3; i++){
					printf("Insira um número qualquer: ");
					scanf("%f", &num);
					sum = sum + num;
					}
				media = sum / 3;
				printf("\n O média dos números inseridos foi de: %0.1f\n", media);
				printf("Insira o código para outra questão ou para fechar: ");
				scanf("%d",&quest);	
				}
		if (quest == 1){
			printf("Insira dois números quaisquer: \n");
			scanf("%d%d", &i,&num3);
				printf("Primeiro cálculo: \nO dividendo é %d, o divisor é %d, o quociente é %d e o resto é: %d \n\n", i, num3, i / num3, i % num3);
				printf("Segundo cálculo: \nO dividendo é %d, o divisor é %d, o quociente é %d e o resto é: %d \n\n", num3, i, num3 / i, num3 % i);

			printf("Insira o código para outra questão ou para fechar: ");
			scanf("%d",&quest);
			}
		if (quest == 2){
				printf("Insira um valor para base e para a altura do triangulo: \n");
				scanf("%f%f", &num, &num1);
				printf("O valor da base do triangulo é: %0.1f da altura é: %0.1f e sua área é: %0.1f \n", num, num1, (num*num1) / 2 );
				printf("Insira o código para outra questão ou para fechar: ");
				scanf("%d",&quest);	
				}	
			}		
		}
