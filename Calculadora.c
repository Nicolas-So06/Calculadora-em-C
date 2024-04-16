#include <stdio.h>

int n1, n2;
float resposta;
char op;

int main()
{
    
    printf("Digite o primeiro numero: ");
    scanf("%i",&n1);
    printf("\nDigite o segundo numero: ");
    scanf("%i",&n2);
    
    printf("\nO menu sera: \n['+'] - Adicao \n['-'] - Subtracao \n['*'] - Multiplicacao \n['/'] - Divisao \n['s'] - Sair");
    printf("\nEscolha um operador: ");
    scanf("%s",&op);
    
    switch(op){
        case '+':
            resposta = n1 + n2;
            printf("%i + %i = %f", n1, n2, resposta);
            break;
        case '-':
            resposta = n1 - n2;
            printf("%i - %i = %f", n1, n2, resposta);
            break;
        case '*':
             resposta = n1 * n2;
            printf("%i * %i = %f", n1, n2, resposta);
            break;
        case '/':
             if (n2 == 0){
                 printf("Nenhum numero pode ser divido por 0!");
                 return 0;
             }
             else{
                resposta =(float) n1 / n2;
                printf("%i / %i = %f", n1, n2, resposta);
                break;
            }
         case 's':
         case 'S':
            printf("Encerrado!");
            return 0;
        default:
            printf("Digite uma operacao valida!");
    }
    
    return 0;
}
