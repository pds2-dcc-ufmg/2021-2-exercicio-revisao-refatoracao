#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double porcentagem = 0.1;
double porcenteagemWanda = 0.1;


class Especialista : public Funcionario {
    public:
     string especialidade;
     double comissao(double valorVenda) {
     double comissao = valorVenda*porcentagem;
     return comissao;
    }
    
void printData() {
     std::cout << "[Especialista]" << endl;
     Funcionario::printData();
     std::cout << "  Nome: " << nome << endl
     << "  SalarioBase: R$ " << fixed << setPrecision(2) << salarioBase <<endl;
    }
};

#endif
