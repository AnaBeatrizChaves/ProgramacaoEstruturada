#include<stdio.h>

main(){
    char alunos[3][20] = {"Maria", "Jose", "Pedro Luis"};

    printf("%s", alunos[2]);

    char nomes[3][20];

    for (int i = 0; i < 3; i++) {
        printf("\nDigite o nome: ");
        fgets(nomes[i], 20, stdin);
    }
    
    for(int i = 0; i < 3; i++){
        printf("\nNome: %d %s", i, nomes[i]);
    }
}