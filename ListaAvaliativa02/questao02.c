/*

2. Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).
A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo.

*/

#include <stdio.h>

// Protótipos das funções
char validaSexo();
float validaSalario();
void classificaSalario(float salario, int *abaixo, int *acima);
void mostraClassifica(float salario, char sexo);

int main() {
    int numAssalariados, abaixoDoMinimo = 0, acimaDoMinimo = 0;

    // Solicita o número de assalariados
    printf("Digite o número de assalariados: ");
    scanf("%d", &numAssalariados);

    // Loop para cada assalariado
    for (int i = 0; i < numAssalariados; i++) {
        printf("\nAssalariado %d:\n", i + 1);

        // Validação do sexo
        char sexo = validaSexo();

        // Validação do salário
        float salario = validaSalario();

        // Classificação do salário
        classificaSalario(salario, &abaixoDoMinimo, &acimaDoMinimo);

        // Mostra resultados
        mostraClassifica(salario, sexo);
    }

    // Apresenta o total de assalariados abaixo e acima do salário mínimo
    printf("\nTotal de assalariados abaixo do salário mínimo: %d\n", abaixoDoMinimo);
    printf("Total de assalariados acima do salário mínimo: %d\n", acimaDoMinimo);

    return 0;
}

// Função para validar o sexo
char validaSexo() {
    char sexo;

    while (1) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f') {
            return sexo;
        } else {
            printf("Sexo inválido. Digite M para Masculino ou F para Feminino.\n");
        }
    }
}

// Função para validar o salário
float validaSalario() {
    float salario;

    while (1) {
        printf("Digite o salário (R$): ");
        scanf("%f", &salario);

        if (salario > 1.0) {
            return salario;
        } else {
            printf("Salário inválido. Deve ser maior que R$1,00.\n");
        }
    }
}

// Sub-algoritmo para classificar o salário
void classificaSalario(float salario, int *abaixo, int *acima) {
    if (salario < 1400.0) {
        (*abaixo)++;
    } else {
        (*acima)++;
    }
}

// Sub-algoritmo para mostrar resultados
void mostraClassifica(float salario, char sexo) {
    printf("Salário: R$ %.2f\n", salario);

    printf("Sexo: ");
    if (sexo == 'M' || sexo == 'm') {
        printf("Masculino\n");
    } else {
        printf("Feminino\n");
    }

    printf("Classificação em relação ao salário mínimo: ");
    if (salario < 1400.0) {
        printf("Abaixo do salário mínimo\n");
    } else if (salario == 1400.0) {
        printf("Igual ao salário mínimo\n");
    } else {
        printf("Acima do salário mínimo\n");
    }

    printf("\n");
}
