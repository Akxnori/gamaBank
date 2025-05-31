//Alysson e Alexandre
#include <stdio.h>
#include <string.h>
#include "autenticacao.h"
#include "consulta_saldo.h"
#include "saque.h"
#include "deposito.h"
#include "historico.h"

int main() {
    char usuario[20], senha[20];
    int idUsuario;

    printf("=== Bem-vindo ao ATM ===\nUsuário: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", senha);

    idUsuario = autenticar(usuario, senha);

    if (idUsuario == -1) {
        printf("Login inválido.\n");
        return 1;
    }

    int opcao;
    float valor;

    do {
        printf("\n1. Consultar Saldo\n2. Saque\n3. Depósito\n4. Histórico\n0. Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exibirSaldo(idUsuario);
                break;
            case 2:
                printf("Valor do saque: R$ ");
                scanf("%f", &valor);
                if (sacar(idUsuario, valor)) {
                    registrarOperacao(idUsuario, "Saque realizado");
                }
                break;
            case 3:
                printf("Valor do depósito: R$ ");
                scanf("%f", &valor);
                depositar(idUsuario, valor);
                registrarOperacao(idUsuario, "Depósito realizado");
                break;
            case 4:
                mostrarHistorico(idUsuario);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
