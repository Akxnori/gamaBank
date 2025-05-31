//Alexandre
#include <stdio.h>
#include "contas.h"
#include "saque.h"

int sacar(int idUsuario, float valor) {
    if (valor <= 0) {
        printf("Valor inválido para saque.\n");
        return 0;
    }
    if (valor > contas[idUsuario].saldo) {
        printf("Saldo insuficiente.\n");
        return 0;
    }
    contas[idUsuario].saldo -= valor;
    printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
    return 1;
}
