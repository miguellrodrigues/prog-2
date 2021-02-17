//
// Created by miguel on 17/02/2021.
//

#ifndef LP2_3_QUADRADO_HPP
#define LP2_3_QUADRADO_HPP


#include "../Base.hpp"

class Quadrado: public Base {

public:
    explicit Quadrado(double lado);

    double calculateArea() override;

private:
    const double lado;
};


#endif //LP2_3_QUADRADO_HPP
