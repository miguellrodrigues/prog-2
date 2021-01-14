//
// Created by miguellr on 14/01/2021.
//

#ifndef PROG2_1_CONTACORRENTE_H
#define PROG2_1_CONTACORRENTE_H

#include <string.h>
#include <string>

using namespace std;

typedef struct contaCorrente *contaCorrentePtr;

contaCorrentePtr criar(string titular, float saldo, float limite);

float consultarSaldo(contaCorrentePtr contaCorrente);

string consultarTitular(contaCorrentePtr contaCorrente);

int depositar(contaCorrentePtr contaCorrente, float valor);

int sacar(contaCorrentePtr contaCorrente, float valor);

int transferir(contaCorrentePtr contaCorrente, contaCorrentePtr contaCorrenteCredor, float valor);

int podeSacar(contaCorrentePtr contaCorrente, float valor);

void apagar(contaCorrentePtr contaCorrente);

#endif //PROG2_1_CONTACORRENTE_H
