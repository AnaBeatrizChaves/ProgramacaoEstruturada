#include <stdio.h>
/*
9. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
*/

main(){

    float salario, reajuste, novoSalario;

    printf("Digite o salario mensal atual: R$ ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    novoSalario = ((reajuste/100) + 1) * salario;

    printf("O valor do novo salario e : R$ %.2f", novoSalario);    
}