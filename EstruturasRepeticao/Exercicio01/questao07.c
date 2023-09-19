#include<stdio.h>
/*
7. Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:

a) sexo (m e f);
b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));
c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));
d) idade em anos.
e) valor do salário.

Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.

Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos
*/ 

main(){
    char sexo, corOlhos, corCabelos;
    int idade, contador_geral = 0, contador_esp = 0;
    float salario, porcentagem;

    do{
        contador_geral ++;
        fflush(stdin);

        printf("\n----------------- PESQUISA ------------------\n");
        printf("Preencha os campos abaixo: \n");
        printf("---------------------------------------------\n");

        do{
            printf("\n- IDADE (de 10 a 100 anos): ");
            scanf("%d", &idade);
                if(idade < 10 || idade > 100){
                    printf("\nOpcao invalida...\ntente novamente!\n");
                }
            printf("-----------------\n");
        }while(idade != -1 && (idade < 10 || idade > 100));

        do{
            printf("m -> Masculino / f -> Feminino");
            printf("\n- SEXO: ");
            scanf("%c", &sexo);
            fflush(stdin);
            printf("\n-----------------");
        }while(sexo !='f' && sexo != 'm');
        
        do{
            printf("a -> Azul\nv -> Verde\nc -> Castanho\np -> Preto\n");
            printf("- COR DOS OLHOS: ");
            scanf("%c", &corOlhos);
            fflush(stdin);
            printf("-----------------\n");
        }while(corOlhos != 'a' && corOlhos != 'v' && corOlhos != 'c' && corOlhos != 'p');
        
        do{
            printf("l -> Loiro\nc -> Castanho\np -> Preto\nr -> Ruivo\n");
            printf("- COR DOS CABELOS: ");
            scanf("%c", &corCabelos);
            fflush(stdin);
            printf("-----------------\n");
        }while(corCabelos != 'l' && corCabelos != 'c' && corCabelos != 'p' && corCabelos != 'r');
        
        do{
            printf("- SALARIO: R$ ");
            scanf("%f", &salario);
            printf("-----------------\n");
        }while(salario < 0);


        if (sexo == 'f' && idade > 18 && idade < 35 && corOlhos == 'c' && corCabelos == 'c'){
            contador_esp++;
        }

        printf("\nOBSERVACAO:\nDigite -1 para sair\n0 para continuar!!\n");
        scanf("%d", &idade);
    }while(idade != -1);

        porcentagem = (float)contador_esp * 100 / contador_geral;

        printf("\nTotal de Cadastros: %d", contador_geral);
        printf("\nPorcentagem de mulheres com caracteristicas especificas: %.2f", porcentagem);

    
}