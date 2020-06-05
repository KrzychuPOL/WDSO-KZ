#include <stdio.h>
#include <stdlib.h>
#include "objetosci.h"
#include "pola.h"

int main(int argc, char *argv[]) {
    float a,b,H;
    int dzialaj=1;
    int wejscie;
    printf("Program liczy pola i objetosci prostokatu i prostopadlosciani\n");
    while (dzialaj) {
        printf("%s\n%s\n%s\n%s\n\n%s",
               "1. Pole prostokata",
               "2. Pole prostopadloscianu",
               "3. Objetosc prostopadloscianu",
               "4. Zakoncz program",
               "Wybierz opcje: "
        );
        scanf("%d", &wejscie);
        switch (wejscie) {
            case 1:
                printf("Podaj boki prostokata: a= ");
                scanf("%f", &a);
                printf("b= ");
                scanf("%f", &b);
                printf("\n%s%0.2f\n\n","Pole prostokata wynosi: ",pprostokat(a,b));
                break;
            case 2:
                printf("Podaj boki podstawy prostopadloscianu: a= ");
                scanf("%f", &a);
                printf("b= ");
                scanf("%f", &b);
                printf("H= ");
                scanf("%f", &H);
                printf("\n%s%0.2f\n\n","Pole prostopadloscianu wynosi: ",pprostopadloscian(a, b, H));
                break;
            case 3:
                printf("Podaj boki podstawy prostopadloscianu: a= ");
                scanf("%f", &a);
                printf("b= ");
                scanf("%f", &b);
                printf("H= ");
                scanf("%f", &H);
                printf("\n%s%0.2f\n\n","Objetosc prostopadloscianu wynosi: ",vp(a, b, H));
                break;
            case 4:
                printf("Program zostal zakonczony\n");
                dzialaj=0;
                break;
            default:
                break;
        }
    }

    return 0;
}
