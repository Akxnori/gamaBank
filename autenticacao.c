//alysson 
#include <string.h>
#include "contas.h"
#include "autenticacao.h"

Conta contas[MAX_USUARIOS] = {
    {"joao", "1234", 1000.0, {}, 0},
    {"maria", "abcd", 2500.0, {}, 0},
    {"ana", "senha", 1500.0, {}, 0},
    {"carlos", "4321", 3000.0, {}, 0},
    {"lucas", "admin", 500.0, {}, 0}
};

int autenticar(const char* usuario, const char* senha) {
    for (int i = 0; i < MAX_USUARIOS; i++) {
        if (strcmp(contas[i].usuario, usuario) == 0 && strcmp(contas[i].senha, senha) == 0) {
            return i;
        }
    }
    return -1;
    // Alysson Rebouças 

}
