#include <stdio.h>
#include <locale.h>

// Função que verifica se um número pertence à sequência de Fibonacci
int verificarFibonacci(int numero) {
    // Inicializa as duas primeiras variáveis da sequência
    int anterior = 0;
    int atual = 1;
    int proximo;
    
    // Verifica se o número é igual a 0 ou 1, que são os dois primeiros números da sequência
    if (numero == anterior || numero == atual) {
        return 1;  // Retorna 1 se o número pertence à sequência
    }

    // Enquanto o valor atual for menor que o número informado
    while (atual < numero) {
        // Calcula o próximo número da sequência somando os dois anteriores
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;

        // Verifica se o número atual é igual ao número informado
        if (atual == numero) {
            return 1;  // Retorna 1 se o número pertence à sequência
        }
    }
    
    // Se o laço terminar e o número não for encontrado, retorna 0
    return 0;
}

int main() {
	setlocale(LC_ALL, "");
    int numero;

    // Pede ao usuário para digitar um número
    printf("Digite um número: ");
    scanf("%d", &numero);  // Lê o número informado e armazena na variável "numero"

    // Chama a função para verificar se o número pertence à sequência de Fibonacci
    int pertence = verificarFibonacci(numero);

    // Verifica o resultado e exibe a mensagem correspondente
    if (pertence == 1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
