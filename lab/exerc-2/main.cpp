#include "Account.hpp"
#include <iostream>

int main() {
  Account account1(100.0, 50.0, "joao");

  Account account2(1000.0, 500.0, "marcio");

  account1.print();
  account2.print();

  unsigned int resultTransfer = account2.transfer(account1, 1600);

  if (resultTransfer) {
    account1.print();
    account2.print();
  } else {
    cout << "Transfer failed, insufficient founds" << endl;
  }
}
