#include<stdio.h>

main(){
    float mediaFinal;

    printf("Digite a nota de sua media final: ");
    scanf("%f", &mediaFinal);

    //aprovado
    if (mediaFinal >= 7){
        printf("Aluno(a) Aprovado(a)...Parabens!!");
    //recuperação
    }else if (mediaFinal >= 4 && mediaFinal <= 6.9){
        printf("Aluno(a) de Recuperacao...");
    //reprovado
    }else{
        printf("Aluno(a) Reprovado(a)...");
    }
}