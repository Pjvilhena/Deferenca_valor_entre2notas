#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int nota1, nota2, resul;
    printf("Diferença entre as notas\n");
    printf("Escreva sua primeira nota: \n");
    scanf("%d", &nota1);
    printf("Escreva sua segunda nota: \n");
    scanf("%d", &nota2);
    printf("A diferença entre as notas é %d\n", abs (nota1 - nota2));   
    system("pause");
    system("cls");
}    