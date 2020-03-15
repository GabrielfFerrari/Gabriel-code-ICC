#include<stdio.h>
#include<stdlib.h>
void main(){
	int opss = 10;
	float a,b,c;
	printf("Bem vindo a resolução de questões da parte 1 da primeira lista de ICC\n\n");
	printf("0 para primeira questão\n");
	printf("1 para segunda questão\n");
	printf("2 para terceira questão\n");
	printf("Outro número fecha o código: ");
	scanf("%d", &opss); 
	while (opss < 3){
		      	if( opss == 0 ){		       	// questão1
					a=3;
					b=5;
					printf("\n Seu nome é Gabriel Fernandez Ferrari Melo");
					printf("\n A soma de 3 com 5 é igual à: %0.1f", a + b);
					printf("\n A subtração de 3 com 5 é igual à: %0.1f", a - b);
					printf("\n A multiplicação de 3 com 5 é igual à: %0.1f", a * b);
					printf("\n A divisão de 3 e 5 resulta em %0.1f \n", a / b );
					printf("\n Você deseja acessar outra questão? (insira o código da questão ou saída)\n ");				
					scanf("%d", &opss);
					}
			if ( opss== 1){	// questão2
					a=8;
					b=7;
					c=9;
					printf("\n A média entre 8, 7 e 9 é dada por: %0.1f \n", (a + b + c) / 3);
					printf("\n Você deseja acessar outra questão? (insira o código da questão ou saída)\n ");				
					scanf("%d", &opss);
				}
			if ( opss == 2 ) { // questão
					printf("\n Insira um número qualquer: ");
					scanf("%f",&a);
					printf("\n O número inserido foi: %0.1f, seu sucessor é: %0.1f e seu antecessor é: %0.1f \n", a, a + 1, a - 1);
					printf("\n Você deseja acessar outra questão? (insira o código da questão ou saída)\n ");				
					scanf("%d", &opss);	
				}
			}
		}
