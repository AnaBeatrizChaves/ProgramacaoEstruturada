#include<stdio.h>
/*
2)Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia: 

o elevador que utilizava com mais frequência; 
o período que utilizava o elevador, entre:
“M” = matutino; 
“V” = vespertino; 
“N” = noturno. 
Construa um algoritmo que calcule e imprima:

qual o período mais usado de todos e a que elevador pertence;
qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
qual a diferença percentual entre o mais usado dos horários e o menos usado;
qual a percentagem sobre o total de serviços prestados do elevador de média utilização. 
*/ 

main(){ 
    int cont = 0, A = 0, B = 0, C = 0, M = 0, V = 0, N = 0, elevadorMaisUsado = 0, periodoMaisUsado = 0, percentual;
    char elevador, periodo;

    do {
        printf("\n\n=========== PESQUISA - ELEVADORES =========\n");
        cont++;
        printf("MORADOR %d", cont);
        printf("\nPreencha os campos abaixo\n");
        printf("Elevador A\tElevador B\tElevador C\n");
        printf("Elevador que utilizava com mais frequencia: ");
        scanf("%c", &elevador);
        fflush(stdin);
        printf("-------------------\n");
        printf("M\tmatutino\nV\tvespertino\nN\tnoturno");
        printf("\nPeriodo que utilizava o elevador:\n");
        scanf("%c", &periodo);
        fflush(stdin);

            if(elevador == 'A'){ 
                A++;
            }else if(elevador == 'B'){
                B++;    
            }else if (elevador == 'C'){
                C++;    
            }else if(periodo == 'M'){
                M++; 
            }else if(periodo == 'V'){
                V++; 
            }else if(periodo == 'N'){
                N++;
            }else{
                printf("Opcao invalida...");
            }

            if (A>B && B>C){
                elevadorMaisUsado = A;
            }else if (B>A && A>C){
                elevadorMaisUsado = B;
            }else if (C>A && A>C){
                elevadorMaisUsado = C;
            }else if (M>V && V>N){
                periodoMaisUsado = M;
            }else if (V>M && M>N){
                periodoMaisUsado = V;
            }else if (N>M && M>V){
                periodoMaisUsado = N;
            }

    }while (cont < 50);
        percentual = (elevadorMaisUsado * 100) / cont;
       
        
        printf("\n\n_______________ RESULTADOS ________________\n");
        printf("Periodo mais usado de todos e elevador pertencente: %d %d", periodoMaisUsado, elevadorMaisUsado);
        printf("\nElevador mais frequentado e periodo em que se concentra o maior fluxo: %d %d", elevadorMaisUsado, periodoMaisUsado);
        printf("\nDiferenca percentual entre o mais usado dos horarios e o menos usado: %d%%", percentual);
        printf("\nPercentagem sobre o total de servicos prestados do elevador de media utilizacao: %d%%", percentual);
        
}