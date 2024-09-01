#include <stdio.h>
#include <locale.h>

// Fun��o que verifica se um n�mero pertence � sequ�ncia de Fibonacci
int verificarFibonacci(int numero) {
    // Inicializa as duas primeiras vari�veis da sequ�ncia
    int anterior = 0;
    int atual = 1;
    int proximo;
    
    // Verifica se o n�mero � igual a 0 ou 1, que s�o os dois primeiros n�meros da sequ�ncia
    if (numero == anterior || numero == atual) {
        return 1;  // Retorna 1 se o n�mero pertence � sequ�ncia
    }

    // Enquanto o valor atual for menor que o n�mero informado
    while (atual < numero) {
        // Calcula o pr�ximo n�mero da sequ�ncia somando os dois anteriores
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;

        // Verifica se o n�mero atual � igual ao n�mero informado
        if (atual == numero) {
            return 1;  // Retorna 1 se o n�mero pertence � sequ�ncia
        }
    }
    
    // Se o la�o terminar e o n�mero n�o for encontrado, retorna 0
    return 0;
}

int main() {
	setlocale(LC_ALL, "");
    int numero;

    // Pede ao usu�rio para digitar um n�mero
    printf("Digite um n�mero: ");
    scanf("%d", &numero);  // L� o n�mero informado e armazena na vari�vel "numero"

    // Chama a fun��o para verificar se o n�mero pertence � sequ�ncia de Fibonacci
    int pertence = verificarFibonacci(numero);

    // Verifica o resultado e exibe a mensagem correspondente
    if (pertence == 1) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", numero);
    } else {
        printf("O n�mero %d N�O pertence � sequ�ncia de Fibonacci.\n", numero);
    }

    return 0;
}
