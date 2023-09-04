#include<stdio.h>
/*7. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. 
Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 
*/

main(){
    float prova1, prova2, prova3, mediaPond;

    printf("Preencha os campos abaixo: ");
    printf("Notas---------------------\n");
    printf("PROVA 01: ");
    scanf("%f", &prova1);
    printf("PROVA 02 ");
    scanf("%f", &prova2);
    printf("PROVA 03: ");
    scanf("%f", &prova3);

    mediaPond = ((1 * prova1) + (1 * prova2) + (2 * prova3)) / (1 + 1 + 2);
    printf("A media final do aluno e %.2f pontos\n", mediaPond);

    if (mediaPond >= 7) {
        printf("Aluno(a) Aprovado(a), Parabens!!");
    }else {
        printf("Aluno(a) Reprovado(a)!!");
    }
}
    