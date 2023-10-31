#include<stdio.h>
/*
3. Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

    a linha 2 com a linha 8;
    a coluna 4 com a coluna 10;
    a diagonal principal com a secundária;
    a linha 5 com a coluna 10;

O procedimento deve retornar a matriz alterada.
*/

// matriz original
void imprimir(int matriz[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

//troca linha 2 pela linha 8
void trocarLinha2Linha8(int matriz[10][10]){
    int aux; //para guardar o valor e evitar receber o mesmo valor na hora da troca
    for(int i = 0; i < 10; i++){
        aux = matriz[1][i];
        matriz[1][i] = matriz [7][i];
        matriz[7][i] = aux;   
    }
}
 
//troca coluna 4 pela coluna 10
void trocarColuna4Coluna10(int matriz[10][10]){
    int aux; //para guardar o valor e evitar receber o mesmo valor na hora da troca
    for(int i = 0; i < 10; i++){
        aux = matriz[i][3];
        matriz[i][3] = matriz [i][9];
        matriz[i][9] = aux;   
    }
}

//troca a diagonal principal com a secundária
void trocarDiagonais(int matriz[10][10]){
    int aux; //para guardar o valor e evitar receber o mesmo valor na hora da troca
    for(int i = 0; i < 10; i++){
        aux = matriz[i][i];
        matriz[i][i] = matriz [i][9 - i];
        matriz[i][9 - i] = aux;   
    }
}

//troca a linha 5 com a coluna 10
void trocarLinha5Coluna10(int matriz[10][10]){
    int aux; //para guardar o valor e evitar receber o mesmo valor na hora da troca
    for(int i = 0; i < 10; i++){
        aux = matriz[4][i];
        matriz[4][i] = matriz [i][9];
        matriz[i][9] = aux;   
    }
}


main(){
    int matriz[10][10];

    for (int i= 0; i < 10; i++){
        for (int j= 0; j < 10; j++){
            matriz[i][j] = i * 10 + j;
        }
        printf("\n");
    }

    //impressao da matriz original
    imprimir(matriz);

    //trocarLinha2Linha8(matriz);
    //trocarColuna4Coluna10(matriz);
    //trocarDiagonais(matriz);
    trocarLinha5Coluna10(matriz);
    printf("\n");
    imprimir(matriz);
}