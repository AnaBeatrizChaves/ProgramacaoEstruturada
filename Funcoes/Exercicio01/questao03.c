#include<stdio.h>
/*
3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a 
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

float conversao(float F);

main(){
    float C, F;
    
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &F);
    float retornoConversao = conversao (F);
    printf("A temperatura %.2f em graus Fahrenheit para graus Celsius e = %.2f", F, retornoConversao);
}

float conversao(float F) {
    float conversao = ((F - 32.0) * (5.0 / 9.0));
    return conversao; 
}