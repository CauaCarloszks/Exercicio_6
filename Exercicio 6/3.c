#include <stdio.h>
#include <math.h>

main() {

    int prato, sobremesa, bebida, calorias;

    printf("Escolha o prato: 1 - Vegetariano(180cal), 2 - Peixe (230 cal), 3 - Frago (250cal) 4 - Carne (350 cal) ");
    scanf("%d", &prato);

    switch(prato){
        case 1:
            calorias = 180;
            break;
        case 2:
            calorias = 230;
            break;
        case 3:
            calorias = 250;
            break;
        case 4:
            calorias = 350;
            break;
    }

    printf("Escolha o prato: 1 - Abacaxi(75cal), 2 - Sorvete Diet (110cal), 3 - Mouse Diet (170cal) 4 - Mouse de chocolate (200cal) ");
    scanf("%d", &sobremesa);

    switch(sobremesa){
        case 1:
            calorias += 75;
            break;
        case 2:
            calorias += 110;
            break;
        case 3:
            calorias += 170;
            break;
        case 4:
            calorias += 200;
            break;
    }

    printf("Escolha o prato: 1 - cha(20cal), 2 - suco de laranja (70cal), 3 - suco de melao (100cal) 4 - refri diet (65cal) ");
    scanf("%d", &bebida);

    switch(bebida){
        case 1:
            calorias += 20;
            break;
        case 2:
            calorias += 70;
            break;
        case 3:
            calorias += 100;
            break;
        case 4:
            calorias += 65;
            break;
    }

    printf("Total de calorias da refeicao: %d", calorias);
}
