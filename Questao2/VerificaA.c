#include <stdio.h>
#include <string.h>

int main() {
    char string[100];  // Um espa�o para armazenar a string digitada pelo usu�rio
    int count = 0;  // Contador para saber quantas vezes a letra 'a' aparece
    int i;  // Vari�vel para percorrer a string

    // Pede para o usu�rio digitar uma string
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);  // L� a string digitada pelo usu�rio

    // Percorre cada caractere da string
    for (i = 0; i < strlen(string); i++) {
        // Verifica se o caractere atual � 'a' ou 'A'
        if (string[i] == 'a' || string[i] == 'A') {
            count++;  // Incrementa o contador se encontrar a letra 'a' ou 'A'
        }
    }

    // Mostra o n�mero de vezes que a letra 'a' apareceu
    if (count > 0) {
        printf("A letra 'a' aparece %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' n�o foi encontrada na string.\n");
    }

    return 0;
}
