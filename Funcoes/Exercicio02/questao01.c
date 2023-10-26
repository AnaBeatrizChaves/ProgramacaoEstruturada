#include<stdio.h>
/*
Fazer um programa que solicita o total gasto pelo cliente de uma loja,
imprime as opções de pagamento, solicita a opção desejada e imprime o
valor total das prestações (se houverem).

1) Opção: a vista com 10% de desconto

2) Opção: em duas vezes (preço da etiqueta)

3) Opção: de 3 até 10 vezes com 3% de juros ao mês sobre 
o valor de cada prestação (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada
e retorna a opção escolhida. No programa principal, testar a opção escolhida
e ativar a função correspondente (uma função para cada opção). 
*/

void mostraMenu(){
    printf("\n====== OPCOES DE PAGAMENTO ======\n");
    printf("\n---------------------------------");
    printf("\n- Opcao 1: a vista com 10%% de desconto\n");
    printf("---------------------------------\n");
    printf("- Opção 2: em 2X vezes (preco da etiqueta)\n");
    printf("---------------------------------\n");
    printf("- Opção 3: de 3 ate 10X com 3%% de juros\nao mes sobre o valor de cada prestação\n(somente para compras acima de R$ 100,00)\n");
    printf("---------------------------------");
}

float calculaOpcao01(float totalGasto){
        float desconto = (totalGasto * 0.1);
        float valorFinal = (totalGasto - desconto);
        return valorFinal;
}

float calculaOpcao02(float totalGasto){
        float valorFinal = totalGasto;
        return valorFinal;
}

float calculaOpcao03(float totalGasto, int numParc) {
        do{
            printf("Digite a quantidade de parcelas (3 ate 10): ");
            scanf("%d", &numParc);
            float juros = totalGasto * 0.03;
            float valorAoMes = totalGasto / numParc;
            float valorFinal = ((valorAoMes + juros) * numParc);
            return valorFinal;
        }while(numParc >= 3 && numParc <= 10);
}

main(){
    float totalGasto;
    int opcao, numParc;

    printf("=================================\n");
    printf("=========== PAGAMENTO ===========\n");
    printf("Preencha o campo abaixo:\n");
    printf("VALOR DA COMPRA = R$ ");
    scanf("%f", &totalGasto);
    mostraMenu();
    printf("\n== Digite a opcao correspondente: ");
    scanf("%d", &opcao);
    printf("\n=================================\n");
    printf("===== VALOR FINAL DA COMPRA =====\n");

    switch (opcao){
        case 1:
            float retornoCalculaOpcao01 = calculaOpcao01 (totalGasto);
            //float retornoDesconto = desconto(totalGasto);
            //printf("DESCONTO = %.2f", desconto);
            printf("VALOR = R$ %.2f", retornoCalculaOpcao01);    
            break;
        case 2:
            float retornoCalculaOpcao02 = calculaOpcao02 (totalGasto);
            printf("VALOR = R$ %.2f", retornoCalculaOpcao02);    
            break;
        case 3:
            if (totalGasto > 100){
                float retornoCalculaOpcao03 = calculaOpcao03 (totalGasto, numParc);
                //float retornoJuros = juros(totalGasto);
                //printf("JUROS = %.2f", juros);
                printf("VALOR = R$ %.2f", retornoCalculaOpcao03);   
            }else{
                printf("Esta opcao e valida somente para compras acima de R$ 100,00.");
            }
            break;

    default:
            printf("O numero nao corresponde a nenhuma opcao!");
    }
}