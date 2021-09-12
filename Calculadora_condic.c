#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");
 
    /*Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
    de 4 opções:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
    Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida
    com os dois valores lidos.*/

    int a, b, opcao;

        printf("\nInsira o valor de a: ");
        scanf("%d", &a);

        printf("\nInsira o valor de b: ");
        scanf("%d", &b);
        
        printf("\nGostaria de (1- somar, 2- subtrair, 3- dividir, 4-multiplicar) =  ");
        scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("\nO resultado da soma de %d + %d eh: %d\n",a, b, (a+b));
            break;
        case 2:
            printf("\nO resultado da subtracao de %d - %d eh: %d\n", a, b, (a-b));
            break;
        case 3:
            printf("\nO resultado da divisao de %d - %d eh: %d\n", a, b, (a/b));
            break;
        case 4:
            printf("\nO resultado da nultiplicacao de %d - %d eh: %d\n", a, b, (a/b));
            break;
        default:
            printf("\nOpcao invalida!!!!!!\n");
            break;
    }
    system("pause");
}    
