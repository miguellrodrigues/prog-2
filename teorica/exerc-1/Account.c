//
// Created by miguellr on 14/01/2021.
//

#include "Account.h"
#include <malloc.h>
#include <string.h>
#include <assert.h>

struct account {
    char owner[16];
    float balance;
    float limit;
};

ACCOUNT create(char owner[16], float balance, float limit) {
    ACCOUNT accountPtr = malloc(sizeof(ACCOUNT));

    strcpy(accountPtr->owner, owner);
    accountPtr->balance = balance;
    accountPtr->limit = limit;

    return accountPtr == NULL ? NULL : accountPtr;
}

int canWithdraw(ACCOUNT account, float amount) {
    assert(account != NULL);

    return (account->balance - amount) >= account->limit;
}

float getBalance(ACCOUNT account) {
    assert (account != NULL);

    return account->balance;
}

char *getOwner(ACCOUNT account) {
    assert (account != NULL);

    return account->owner;
}

void deposit(ACCOUNT account, float amount) {
    assert (account != NULL);

    account->balance += amount;
}

int withdraw(ACCOUNT account, float amount) {
    assert (account != NULL);

    if (canWithdraw(account, amount)) {
        account->balance -= amount;

        return 1;
    }

    return 0;
}

int transfer(ACCOUNT account, ACCOUNT account1, float amount) {
    assert (account != NULL && account1 != NULL);

    if (canWithdraw(account, amount)) {
        withdraw(account, amount);
        deposit(account1, amount);

        return 1;
    }

    return 0;
}

void print(ACCOUNT account) {
    printf("\nOwner: %s", getOwner(account));
    printf("\nBalance: %.3f", getBalance(account));
    printf("\nLimit: %.3f\n", account->limit);
}

void delete(ACCOUNT account) {
    assert (account != NULL);

    free(account);
}