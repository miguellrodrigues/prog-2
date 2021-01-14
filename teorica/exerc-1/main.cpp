#include <iostream>
#include "ContaCorrente.h"

int main() {
    auto devedor = criar("Seu Madruga", 12.0, 0.0);
    auto credor = criar("Seu Barriga", 1000.0, 0.0);

    cout << "Saldo devedor " << consultarSaldo(devedor) << endl;
    cout << "Saldo credor " << consultarSaldo(credor) << endl;

    transferir(devedor, credor, 5.0);

    cout << "Saldo devedor " << consultarSaldo(devedor) << endl;
    cout << "Saldo credor " << consultarSaldo(credor) << endl;

    apagar(devedor);
    apagar(credor);

    return 0;
}
