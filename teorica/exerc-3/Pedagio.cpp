#include "Pedagio.hpp"
#include <iostream>

using std::cout;
using std::endl;

Pedagio::Pedagio(double taxa): taxa(taxa), valorColetado(0.0), carros(0)  {

}

Pedagio::Pedagio(): Pedagio(0.0) {

}

void Pedagio::passaCarro() {
    this->carros++;

    this->valorColetado += taxa;
}

void Pedagio::exibe() {
    cout << "Total de carros -> " << this->carros << endl;
    cout << "Total arrecadado -> " << this->valorColetado << endl;
}