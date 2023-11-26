#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
    
    void setesp(string esp){
        especialidade = esp;
    }

    double comissao(double ValorVenda) {
        return ValorVenda*0.1;
    }

    void print() {
        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << getname() << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << getwage() <<endl;

    }
    private: 
        string especialidade;
};

#endif
