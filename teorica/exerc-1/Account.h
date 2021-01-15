//
// Created by miguellr on 15/01/2021.
//

#ifndef TAD_ACCOUNT_H
#define TAD_ACCOUNT_H

typedef struct account *ACCOUNT;

ACCOUNT create(char owner[16], float balance, float limit);

float getBalance(ACCOUNT account);

char *getOwner(ACCOUNT account);

void deposit(ACCOUNT account, float amount);

int withdraw(ACCOUNT account, float amount);

int transfer(ACCOUNT account, ACCOUNT account1, float amount);

int canWithdraw(ACCOUNT account, float amount);

void print(ACCOUNT account);

void del(ACCOUNT account);

#endif //TAD_ACCOUNT_H
