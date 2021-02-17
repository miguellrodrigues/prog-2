//
// Created by miguel on 17/02/2021.
//

#ifndef LP2_3_CIRCULO_HPP
#define LP2_3_CIRCULO_HPP


#include "../Base.hpp"

class Circulo: public Base {

public:
    Circulo(double raio);

    double calculateArea() override;

private:
    const double raio;
};


#endif //LP2_3_CIRCULO_HPP
