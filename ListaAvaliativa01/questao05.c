#include<stdio.h>
#include<math.h>
/*
5. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: 
*/

main() {
    float x1, x2, y1, y2, distancia;

    printf("--------- DISTANCIA ENTRE DOIS PONTOS ---------\n");
    printf("Preencha os campos abaixo:\n");
    printf("x1 = ");
    scanf("%f", &x1);
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("y2 = ");
    scanf("%f", &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("O valor da distancia entre os pontos = %.4f\n", distancia);
}