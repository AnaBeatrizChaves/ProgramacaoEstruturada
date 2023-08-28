main(){

    int dia, mes, ano, diaAtual, mesAtual, anoAtual, idadeDias;
    printf("Digite a sua data de nascimento: ");
    printf("\nDia: ");
    scanf("%d", &dia);
    printf("Mes (em algarismo): ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Digite a data atual: ");
    printf("\nDia: ");
    scanf("%d", &diaAtual);
    printf("Mes (em algarismo): ");
    scanf("%d", &mesAtual);
    printf("Ano: ");
    scanf("%d", &anoAtual);

    idadeDias = ((anoAtual - ano) * 365) + ((mesAtual - mes) * 30) + dia;

    printf("Sua idade expressa em dias equivale a = %d dias!", idadeDias);
}