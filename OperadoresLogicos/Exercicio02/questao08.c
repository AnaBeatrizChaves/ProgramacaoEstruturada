#include<stdio.h>
/*8. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar.
As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
*/

main(){
    int idade, tempServico;

    printf("Preencha os campos abaixo: ");
    printf("\nIDADE: ");
    scanf("%d", &idade);
    printf("TEMPO DE SERVICO (em anos): ");
    scanf("%d", &tempServico);

    if (idade >= 65) {
        printf("Este trabalhor PODE se aposentar!!");
    } else if (tempServico >= 30) {
        printf("Este trabalhor PODE se aposentar!!");
    } else if ((idade >= 60) && (tempServico >= 25)) {
        printf("Este trabalhor PODE se aposentar!!");
    }else {
        printf("Este trabalhor NAO PODE se aposentar!!");
    }
}