//
// Created by miguellr on 14/01/2021.
//

#include "ContaCorrente.h"
#include "malloc.h"
#include <string>

struct contaCorrente {
    string titular;
    float saldo;
    float limite;
};

contaCorrentePtr criar(string titular, float saldo, float limite) {
    contaCorrentePtr ptr = static_cast<contaCorrentePtr>(malloc(sizeof(contaCorrente)));

    if (ptr != nullptr) {
        ptr->titular.append(titular);
        ptr->saldo = saldo;
        ptr->limite = limite;
    }

    return ptr;
}

int podeSacar(contaCorrentePtr contaCorrente, float valor) {
    return (contaCorrente->saldo >= valor) && ((contaCorrente->saldo - valor) >= contaCorrente->limite);
}

float consultarSaldo(contaCorrentePtr conta) {
    if (conta != nullptr) {
        return conta->saldo;
    }

    return -1;
}

string consultarTitular(contaCorrentePtr conta) {
    if (conta != nullptr) {
        return conta->titular;
    }

    return "";
}

int depositar(contaCorrentePtr contaCorrente, float valor) {
    if (contaCorrente != nullptr) {

        contaCorrente->saldo += valor;

        return 0;
    }

    return -1;
}

int sacar(contaCorrentePtr contaCorrente, float valor) {
    if (contaCorrente != nullptr) {

        if (podeSacar(contaCorrente, valor)) {

            contaCorrente->saldo -= valor;

            return 0;
        }

        return 1;
    }

    return -1;
}

int transferir(contaCorrentePtr contaCorrente, contaCorrentePtr contaCorrenteCredor, float valor) {

    if (contaCorrente != nullptr && contaCorrenteCredor != nullptr) {
        if (podeSacar(contaCorrente, valor)) {
            sacar(contaCorrente, valor);
            depositar(contaCorrenteCredor, valor);

            return 0;
        }

        return 1;
    }

    return -1;
}

void apagar(contaCorrentePtr contaCorrente) {
    if (contaCorrente != nullptr) {
        free(contaCorrente);
    }
}