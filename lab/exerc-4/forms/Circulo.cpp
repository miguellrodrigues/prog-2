//
// Created by miguel on 17/02/2021.
//

#include <cmath>
#include "Circulo.hpp"

Circulo::Circulo(double raio): raio(raio) {

}

double Circulo::calculateArea() {
    return (M_PI * (this->raio * this->raio));
}


