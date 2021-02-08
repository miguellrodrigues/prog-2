#ifndef PEDAGIO_HPP
#define PEDAGIO_HPP

class Pedagio {
public:
    Pedagio();

    explicit Pedagio(double taxa);

    void passaCarro();

    void exibe();

private:
    double taxa;

    double valorColetado;
    unsigned int carros;
};

#endif