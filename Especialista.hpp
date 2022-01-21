#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;


class Especialista : public Funcionario {

    private:
    string especialidade;
    double perc = 0.1;
    double percWanda = 0.1;

    public:
    Especialista(){
    }
    Especialista(string nome, string IDADE, int rg, double SB,string especialidade):Funcionario( nome,  IDADE,  rg, SB){  
        this->especialidade=especialidade;    
    }

    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }


    void print() {

        std::cout << "[Especialista]" << endl;
               
        std::cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        



        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
};

#endif
