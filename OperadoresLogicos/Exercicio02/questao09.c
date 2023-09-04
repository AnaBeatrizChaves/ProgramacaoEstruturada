#include<stdio.h>
/* 9. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

• o valor do salario atual do funcionário; 

• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

Use as tabelas */

main(){
    float salarioAtual, novoSalario, tempServico;

    printf("---------------------------"); 
    printf("\nPreencha os campos abaixo: ");
    printf("\n---------------------------"); 
    printf("\nValor do salario atual: R$ ");
    scanf("%f", &salarioAtual);
    printf("Tempo de servico na empresa (numero de anos de trabalho na empresa): ");
    scanf("%f", &tempServico);

    if ((salarioAtual <= 500) && (tempServico < 1) ){
        novoSalario = 1.25 * salarioAtual;
        printf("--\nValor do salario final: R$ %.2f", novoSalario);

    }else if ((salarioAtual <= 1000) && (tempServico >= 1 && tempServico <= 3)) {
        novoSalario = (1.2 * salarioAtual) + 100; // bonus de R$100
        printf("--\nValor do salario final: R$ %.2f", novoSalario);

    }else if ((salarioAtual <= 1500) && (tempServico >= 4 && tempServico <= 6)) {
        novoSalario = (1.15 * salarioAtual) + 200; // bonus de R$200
        printf("--\nValor do salario final: R$ %.2f", novoSalario);

    }else if ((salarioAtual <= 2000) && (tempServico >= 7 && tempServico <= 10)) {
        novoSalario = (1.1 * salarioAtual) + 300; // bonus de R$300
        printf("--\nValor do salario final: R$ %.2f", novoSalario);

    }else if ((salarioAtual > 2000) && (tempServico > 10)) {
        novoSalario = salarioAtual + 500; // bonus de R$500
        printf("--\nValor do salario final: R$ %.2f", novoSalario);

    }else{
        printf("O funcionario nao tem direito a nenhum aumento!!");
    }
}
