#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double PercentualDoGerente = 0.1;



class Especialista : public Funcionario {

    

    private:
        string especialidade;

    
    public:
    
    double Comissao(double ValorVenda) {
        return ValorVenda*PercentualDoGerente;            
    }


    void print() {

        std::cout << "[Especialista]" << endl;
        
        Funcionario::print();



        std::cout << "  Nome: " << Nome << endl << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
};

#endif
