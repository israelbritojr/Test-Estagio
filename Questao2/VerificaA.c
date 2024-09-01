#include <stdio.h>
#include <string.h>

int main() {
    char string[100];  // Um espaço para armazenar a string digitada pelo usuário
    int count = 0;  // Contador para saber quantas vezes a letra 'a' aparece
    int i;  // Variável para percorrer a string

    // Pede para o usuário digitar uma string
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);  // Lê a string digitada pelo usuário

    // Percorre cada caractere da string
    for (i = 0; i < strlen(string); i++) {
        // Verifica se o caractere atual é 'a' ou 'A'
        if (string[i] == 'a' || string[i] == 'A') {
            count++;  // Incrementa o contador se encontrar a letra 'a' ou 'A'
        }
    }

    // Mostra o número de vezes que a letra 'a' apareceu
    if (count > 0) {
        printf("A letra 'a' aparece %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' não foi encontrada na string.\n");
    }

    return 0;
}
