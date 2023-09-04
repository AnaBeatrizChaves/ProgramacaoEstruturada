#include<stdio.h>
#include<math.h>
/* 10. Calcule as raízes da equação de 2º grau.

A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 

• Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 

• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.

• Se ∆ ≥ 0, imprima as duas raízes reais. 
*/

main(){
    float A, B, C, delta, raiz1, raiz2, raizReal;

    printf("----------------------------------------------\n");
    printf("Equacao do 2o grau: ax2 + bx + cx = 0\n");
    printf("----------------------------------------------\n");
    printf("Preencha os valores a,b e c, respectivamente: ");
    printf("\nA = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    printf("C = ");
    scanf("%f", &C);

    delta = pow (B, 2) - 4 * (A) * (C);

    if (A != 0) {
        if (delta >= 0) {
            raiz1 = (- B + sqrt(delta)) / (2 * A);
            raiz2 = (- B - sqrt(delta)) / (2 * A);
            printf("\nRAIZES: %.2f e %.2f", raiz1, raiz2);
        
        } else if (delta = 0) {
            raizReal = (- B + sqrt(delta)) / (2 * A);
             printf("\nRAIZ UNICA: %.2f", raizReal);
        }else {
             printf("\nNAO EXISTE RAIZ");
        }
    }else{
       printf("\nNAO E EQUACAO DE SEGUNDO GRAU!!");
    }
}