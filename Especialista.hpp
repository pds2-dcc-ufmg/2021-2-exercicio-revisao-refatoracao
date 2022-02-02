#ifndef Especialista_HPP
#define Especialista_HPP
//Bibliotecas 
#include "Funcionario.hpp"
#include "Cliente.hpp"
//Define usado no calculo da comissao
#define perc 0.1;

using namespace std;
//Declaração de classe
class Especialista : public Funcionario {
    public:
//Metodo Set
    void SetEspecialidade(string Especialidade);
//Metodo Get
    string GetEspecialidade();
//Metodos Gerais da Classe
    double comissao(double ValorVenda);
    void Print();
    private:
//Variaveis da Classe
    string Especialidade;
};

#endif
