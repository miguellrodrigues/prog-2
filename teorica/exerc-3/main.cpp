#include "Pedagio.hpp"
#include <iostream>

int main(void) {

    Pedagio pedagio(2.5);

    for (size_t i = 0; i < 5; i++)
    {
        pedagio.passaCarro();
    }

    pedagio.exibe();
    

    return 0;
}