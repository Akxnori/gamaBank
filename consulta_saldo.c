//Thiago
#include <stdio.h>
#include "contas.h"
#include "consulta_saldo.h"

void exibirSaldo(int idUsuario) {
    printf("Saldo atual: R$ %.2f\n", contas[idUsuario].saldo);
}
