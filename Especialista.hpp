#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
    string especialidade;
    //Calcula o valor da comissão do especialista, a partir do Valor da Venda
    double comissao(double ValorVenda);
    //Printa os dados do funcionario
    void print();
};

#endif
