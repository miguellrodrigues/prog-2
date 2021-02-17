//
// Created by miguel on 17/02/2021.
//

#include "Triangulo.hpp"

Triangulo::Triangulo(double base, double altura): base(base), altura(altura) {

}

double Triangulo::calculateArea() {
    return (this->base * this->altura) / 2.0;
}
