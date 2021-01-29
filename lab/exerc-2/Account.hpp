#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "string"

using namespace std;

class Account {
  public:
    Account(float balance, float limit, string owner);
    
    float getBalance();
    
    string getOwner();

    void deposit(float value);

    unsigned int withdraw(float value);

    unsigned int transfer(Account &target, float value);

    void print();

  private:
    string owner;
      
    float balance;
    float limit;

    void setBalance(float balance);

    unsigned int canWithdraw(float amount);
};

#endif
