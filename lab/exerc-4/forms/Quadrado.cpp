//
// Created by miguel on 17/02/2021.
//

#include "Quadrado.hpp"

Quadrado::Quadrado(double lado): lado(lado) {

}


double Quadrado::calculateArea() {
    return this->lado * this->lado;
}





