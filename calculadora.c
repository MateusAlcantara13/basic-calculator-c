/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float num1, num2, resultado;
    char operacao;
    
    printf("╔══════════════════════════════╗\n");
    printf("║       CALCULADORA BÁSICA     ║\n");
    printf("╠══════════════════════════════╣\n");
    printf("║  Operações disponíveis:      ║\n");
    printf("║  + Adição                    ║\n");
    printf("║  - Subtração                 ║\n");
    printf("║  * Multiplicação             ║\n");
    printf("║  / Divisão                   ║\n");
    printf("╚══════════════════════════════╝\n");
    
    printf("\nDigite o 1° número: ");
    scanf("%f", &num1);
    printf("Digite a operação ( + , - , * , / ): ");
    scanf(" %c", &operacao);
    printf("Digite o 2° número: ");
    scanf("%f", &num2);
    
    printf("\n──────────────────────────────\n");
    
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f %c %.2f = %.2f", num1, operacao, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f %c %.2f = %.2f", num1, operacao, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f %c %.2f = %.2f", num1, operacao, num2, resultado);
            break;
        case '/':
            
            resultado = num1 / num2;
            printf("%.2f %c %.2f = %.2f", num1, operacao, num2, resultado);
            break;
        default:
            printf("Operação inválida !");
            break;
    }
    return 0;
}