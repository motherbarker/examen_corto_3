//Carlos Daniel Valdez 21976
//ejercicio 2 

#include <stdio.h>

int main(){
    float celsius, far;
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f",&far);
    celsius = (far-32) * 5/9;
    printf("La temperatura ingresada equivale a %.2f grados Celsius",celsius);
    return 0;
}
