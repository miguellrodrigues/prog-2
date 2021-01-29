#include "Account.hpp"
#include <iostream>

Account::Account(float balance, float limit, string owner)
{
  this->balance = balance;
  this->limit = limit;

  this->owner.append(owner);
}

unsigned int Account::canWithdraw(float amount) {
  return (this->balance - amount >= this->limit * -1);
}

float Account::getBalance()
{
  return this->balance;
}

string Account::getOwner()
{
  return this->owner;
}

unsigned int Account::withdraw(float amount)
{
  if (canWithdraw(amount)) {
    this->balance -= amount;

    return 1;
  }

  return 0;
}

void Account::deposit(float amount)
{
  this->balance += amount;
}

unsigned int Account::transfer(Account &target, float amount)
{
  if (canWithdraw(amount)) {
    withdraw(amount);

    target.deposit(amount);

    return 1;
  }

  return 0;
}

void Account::print() {
  cout << endl;

  cout << "Owner: " << getOwner() << endl;
  cout << "Balance: " << this->balance << endl;
  cout << "Limit: " << this->limit << endl;
}
