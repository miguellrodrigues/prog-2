#include <stdio.h>
#include "Account.h"

int main() {
    ACCOUNT account = create("Seu Madruga", 100.0F, 50.0F);
    ACCOUNT account1 = create("Seu Barriga", 1000.0F, 50.0F);

    print(account);
    print(account1);

    int resultTransfer = transfer(account, account1, 150.0F);

    if (resultTransfer) {
        print(account);
        print(account1);
    } else {
        printf("\nTransfer failed, insufficient funds\n");
    }

    del(account);
    del(account1);

    return 0;
}
