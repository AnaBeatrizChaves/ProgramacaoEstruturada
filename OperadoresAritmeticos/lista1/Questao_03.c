#include <stdio.h>
/*
3. Dadas as medidas de uma sala,
informe sua área.
*/
main(){
    float comprimento, largura, area;

    printf("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite o valor da largura: ");
    scanf("%f", &largura);

    area = (comprimento * largura);

    printf("O valor da area e = %.2f metros quadrados", area);
}