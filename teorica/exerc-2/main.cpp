/*Questao 1*/

class Temperatura {
  public:
    void setTemperatura(double valorGraus, char novaEscala);
    
    dougle getTemperatura() { return this.graus; }
    char getEscala() { return this.escala; }
    
    void setTemperatura(double valorGraus, char novaEscala) {
      this.escala = novaEscala;
      this.graus = valorGraus;
    }

    double graus;
    char escala;
}

/* Questao 2
  O operador . (ponto), é utilizado para acessar propriedades de objetos ou estruturas de dados como as structs e unions, sendo os objetos instancias de classes.

  O operador :: (operador de resolução de escopo), indica de onde vem um atributo/método que estamos implementando/modificando.

  
  Exemplo.: 

  class Pessoa {
    public:
      char *nome;

      void setNome(char *novoNome);

      char *pegarNome();
  }

  Pessoa::setNome(char *novoNome) {
    strcpy(this->nome, novoNome); 
  }

  Pessoa::pegarNome() { return this->nome; }

  Pessoa pessoa1;

  pessoa1.setNome("Lilian");

  std::cout << pessoa1.pegarNome() << endl;

*/

/* Questao 3
  
  As funcoes permitidas são as que contem o modificador de acesso `public`, sendo elas: setPreco e getPreco
  
*/

/* Questao 4
  
  Public e Private são modificadores de acesso. O seu uso varia de acordo com a ocasião. O modificador `public`, torna o atributo/método `visível` e modificavel mesmo
  em classes `externas`. De modo parecido, o modificador `private` tornar o atributo/método `invisível` e não modificável em classes externas, sendo utilizado principalmente
   no encapsulamento dos atributos de uma classe.

*/

/* Questao 5
  
  Os itens considerados como `interface` são aqueles que são definidos dentro do escopo da classe, no exemplo abaixo, temos exemplos de itens pertencentes a interface:

  class Exemplo {
    public:
      void a();

      void b();

    private:
      int c;
      int d;
  }

  E em seguida temos os itens considerados como implementação, onde realmente escrevemos a impl das funções anteriormente definidas

  Exemplo::a() {
    this->c = 1;
  }

  Exemplo::b() {
    this->d = 3;
  }

*/

/*
  Somente a sentença `umObjeto = SuaClasse` está incorreta.
*/
