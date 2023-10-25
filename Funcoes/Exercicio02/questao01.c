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



main(){

   
}


/*
    printf("=======================\n");
    printf("==== TOTAL A PAGAR ====\n");
    printf("Preencha o campo abaixo:\n");
    printf("TOTAL GASTO = R$ ");
    scanf("%f", &totalGasto);
    printf("====== PAGAMENTO ======\n");
    printf("Opcao 1: a vista com 10%% de desconto");
    printf("Opção 2: em duas vezes (preco da etiqueta)");
    printf("Opção 3: de 3 ate 10 vezes com 3%% de juros\nnao mes sobre o valor de cada prestação\n(somente para compras acima de R$ 100,00)");
    printf("Digite a opcao correspondente: ");
    scanf("%d", &opcao);
*/
    

/*
        float calculaOpcao01(float totalGasto){
        float desconto = (totalGasto * (10/100));
        float valorFinal = (totalGasto - desconto);
        return valorFinal;
}
*/

/*
        float calculaOpcao02(float totalGasto){
        float valorFinal = totalGasto;
        return valorFinal;
}
*/

/*
float calculaOpcao03(float totalGasto, int numParc) {
        if (totalGasto > 100){
            printf("Digite a quantidade de parcelas (3 ate 10): %d", &numParc);
            float juros = totalGasto * 0.03;
            float valorAoMes = totalGasto / numParc;
            float valorFinal = ((valorAoMes + juros) * numParc);
            return valorFinal;

        }else{
            printf("Esta opcao e valida somente para compras acima de R$ 100,00.");
        }
}
*/