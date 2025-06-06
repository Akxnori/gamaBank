//Henrique
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <ctype.h>
#include "deposito.h"

void realizarDeposito(Conta *conta) {
	bool menu4 = true;
	double valor;
	char sn;
	
	while (menu4) {

		printf("\nInsira a quantia a ser depositada: (Digite 0 para cancelar o depósito): ");
		scanf_s("%lf", &valor);

		while (valor < 0) {
			printf("\nValor inválido, digite uma quantia maior ou igual a 0: ");
			scanf_s("%lf", &valor);
		}

		if (valor == 0) {
			printf("\nDepósito cancelado\n");
			menu4 = false;
		}
		else {

			printf("\nValor a ser depositado será de %.2lf, prosseguir? (Digite 's' para SIM e 'n' para NÃO): ", valor);
			scanf_s(" %c", &sn, 2);
			sn = tolower(sn);

			while (sn != 's' && sn != 'n') {
				printf("\nEntrada inválida, digite novamente 's' para SIM e 'n' para NÃO: ");
				scanf_s(" %c", &sn, 2);
				sn = tolower(sn);
			}

			if (sn == 's') {
				conta->saldo += valor;
				printf("\nSaldo: %.2lf\n", conta->saldo);

				printf("\nDepósito realizado com sucesso.\n");
				menu4 = false;
			}
			else if (sn == 'n') {
				printf("\nDepósito cancelado\n");
			}
		}
	}
}
