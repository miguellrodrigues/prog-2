//
// Created by miguel on 17/02/2021.
//

#ifndef LP2_3_TRIANGULO_HPP
#define LP2_3_TRIANGULO_HPP


#include "../Base.hpp"

class Triangulo: public Base {

public:
    Triangulo(double base, double altura);

    double calculateArea() override;

private:
    const double base;
    const double altura;
};


#endif //LP2_3_TRIANGULO_HPP
