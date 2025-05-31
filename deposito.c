//Henrique
#include <stdio.h>
#include "contas.h"
#include "deposito.h"

void depositar(int idUsuario, float valor) {
    if (valor <= 0) {
        printf("Valor inválido para depósito.\n");
        return;
    }
    contas[idUsuario].saldo += valor;
    printf("Depósito de R$ %.2f realizado com sucesso.\n", valor);
}
