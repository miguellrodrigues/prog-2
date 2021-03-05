#include <iostream>
#include "forms/Quadrado.hpp"
#include "forms/Triangulo.hpp"
#include "forms/Circulo.hpp"

using std::cout;
using std::endl;

int main()
{
    Quadrado q1(15.0);
    Triangulo t1(10.2, 36.4);
    Circulo c1(5.1);

    cout << "Area do quadrado -> " << q1.calculateArea() << endl;
    cout << "Area do triangulo -> " << t1.calculateArea() << endl;
    cout << "Area do circulo -> " << c1.calculateArea() << endl;

    return 0;
}
