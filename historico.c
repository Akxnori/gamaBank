//Thiago
#include <stdio.h>
#include <string.h>
#include "contas.h"
#include "historico.h"

void registrarOperacao(int idUsuario, const char* operacao) {
    if (contas[idUsuario].totalOperacoes < MAX_HISTORICO) {
        snprintf(contas[idUsuario].historico[contas[idUsuario].totalOperacoes], 100, "%s", operacao);
        contas[idUsuario].totalOperacoes++;
    }
}

void mostrarHistorico(int idUsuario) {
    printf("Histórico de operações:\n");
    for (int i = 0; i < contas[idUsuario].totalOperacoes; i++) {
        printf("%d. %s\n", i + 1, contas[idUsuario].historico[i]);
    }
    if (contas[idUsuario].totalOperacoes == 0) {
        printf("Nenhuma operação registrada.\n");
    }
}
