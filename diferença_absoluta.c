#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int nota1, nota2, resul;
    printf("Diferen�a entre as notas\n");
    printf("Escreva sua primeira nota: \n");
    scanf("%d", &nota1);
    printf("Escreva sua segunda nota: \n");
    scanf("%d", &nota2);
    printf("A diferen�a entre as notas � %d\n", abs (nota1 - nota2));   
    system("pause");
    system("cls");
}    