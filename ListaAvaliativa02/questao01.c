/*
1. Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:
    • Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
    • Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
    • Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.
Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido. 
Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:
            a) validaQuantidade que validará o número de peças fabricadas por cada funcionário;
            b) calculaSalario que efetuará o cálculo do salário total para cada funcionário.
O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).
*/

#include <stdio.h>

int validaQuantidade() {
    int quantidade;

    while (1) {
        printf("Digite a quantidade de peças fabricadas: ");
        scanf("%d", &quantidade);

        if (quantidade >= 0) {
            return quantidade;
        } else {
            printf("Quantidade inválida. Digite um valor não negativo.\n");
        }
    }
}

// Função para calcular o salário total
float calculaSalario(int quantidade) {
    float salario_base = 600.0;
    float adicional_produtividade = 0.0;

    if (quantidade > 50 && quantidade <= 80) {
        adicional_produtividade = 0.50 * (quantidade - 50);
    } else if (quantidade > 80) {
        adicional_produtividade = 0.50 * 30 + 0.75 * (quantidade - 80);
    }

    float salario_total = salario_base + adicional_produtividade;
    return salario_total;
}

// Procedimento para mostrar o resultado final
void mostraFinal(float salario) {
    printf("O salário total do funcionário é de R$ %.2f\n", salario);
}


int main() {
    while (1) {
        int quantidade = validaQuantidade();
        float salario = calculaSalario(quantidade);
        mostraFinal(salario);

        char continuar;
        printf("Deseja calcular o salário para outro funcionário? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S') {
            break;
        }
    }

    return 0;
}

