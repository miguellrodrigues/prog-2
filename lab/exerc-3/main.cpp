#include "Point.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {

    Point ponto1(1.0, 2.0);
    Point ponto2(5.0, -4.0);

    cout << ponto1.distance(&ponto2) << endl;

    return 0;
}