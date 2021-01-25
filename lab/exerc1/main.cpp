#include <iostream>

/*
  O proposito da sobrecarga de funcoes, eh a possibilidade de criar funcoes com o mesmo nome, porem
  com parametros diferentes, como por exemplo:

  criarPessoa(nome, telefone) {
    return {  name: nome, telephone: telefone }
  }

  e utilizando a sobrecarga:

  criarPessoa(nome) {
    return criarPessoa(nome, "00000000")
  }

*/

using namespace std;

template <class T> T product(T x, T y) {
  return x * y;
}

int main(void) {

  float altura, largura, area;

  cout << " Informe a altura do retangulo: ";
  cin >> altura;
  cout << endl;

  cout << " Informe a largura do retangulo: ";
  cin >> largura;
  cout << endl;

  area = product(altura, largura);

  cout << " Area = " << area << endl;

  return 0;
}
