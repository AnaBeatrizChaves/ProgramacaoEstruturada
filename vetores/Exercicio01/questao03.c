#include<stdio.h>
#include<math.h>

main() {
    float conjunto[10], quadrado[10];

    for (int i = 0; i < 10; i++) {
        printf("\nDigite um numero real: ");
        scanf("%f", &conjunto[i]);
    }
    for (int i = 0; i < 10; i++) {
       quadrado[i] = pow(conjunto[i], 2);
    }
    for (int i = 0; i < 10; i++) {
       printf("\nCONJUNTOS:%.2f\tQUADRADO DO CONJUNTO:%.2f", conjunto[i], quadrado[i]);
    }
}